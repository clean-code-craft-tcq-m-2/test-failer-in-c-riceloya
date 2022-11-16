#include <stdio.h>
#include <assert.h>
#include "alerter_stub.h"

int alertFailureCount = 0;

void alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
    else{alertFailureCount++;}
}

int main() {
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    printf("%d alerts failed.\n", alertFailureCount);
    #ifndef TARGET_TEST
    testCelcius();
    #endif
    printf("All is well (maybe!)\n");
    return 0;
}
