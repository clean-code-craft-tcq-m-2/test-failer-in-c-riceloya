#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    //for (int i = 30; i < 64; i++)
    int i;
    time_t t;
    srand((unsigned) time(&t));
    while(1)
    {
        i =(rand()%(48-29)) + 29;
        printf("size: %d\n", i);
        if (i<38){
            assert(size(i) == 'S');
        }
        else if(i> 38 &&  i <42){
            assert(size(i) == 'M');
        }
        else if(i>42){
            assert(size(i) == 'L');
        }
        else{ assert(size(42||38)=='L');}
    }
    printf("All is well (maybe!)\n");
    return 0;
}
