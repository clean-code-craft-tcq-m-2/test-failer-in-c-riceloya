#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0, k = 0;
    char manualmap[16]={};
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            k = i*5+j;
            sprintf(manualmap,"%d | %s | %s\n", k, majorColor[i], minorColor[i]);
            assert(manualmap[3] == '|');
            printf("%s",manualmap);
        }
    }
    assert(k==(i*j));
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}