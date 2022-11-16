#include <stdio.h>
#include <assert.h>
extern int alertFailureCount;

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    //assert(alertFailureCount>0);
    return 200;
}

void testCelcius(){assert(alertFailureCount <= 0);}
