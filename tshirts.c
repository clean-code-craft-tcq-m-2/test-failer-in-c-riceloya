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
    char t_shirts;
    
    for (int i = 37; i < 43; i++)
    {
        t_shirts = size(i);
        printf("result: %c\n", t_shirts);
        if (t_shirts == 0)
        {
            printf("ERROR\n");
            //break;
        }      
    }
    /*assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');    
    printf("All is well (maybe!)\n");*/
    return 0;
}
