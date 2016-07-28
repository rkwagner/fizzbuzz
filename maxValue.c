#include <stdio.h>

void main(){
    int ints[] = {15, 18, 2, 37, 19, -11, 0};
    int size = sizeof(ints)/sizeof(ints[0]);
    int i, min = -65535;
    for(i=0;i<size;i++){
        if(ints[i] > min)
            min = ints[i];
    }
    printf("%i\n", min);
}
