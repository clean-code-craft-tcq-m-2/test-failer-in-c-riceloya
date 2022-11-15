#include <stdio.h>
#include <assert.h>

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
    
    for (int i = 0; i < 0xFF; i++)
    {
        printf("size: %d\n", i);
        if (i<38){
            assert(size(i) == 'S');
        }
        else if(i> 38 &&  i <42){
            assert(size(i) == 'M');
        }
        else{assert(size(i) == 'L');}
    }
    printf("All is well (maybe!)\n");
    return 0;
}
