#include <stdio.h>
#include <string.h>

//playing with char* buffers using string.h.
void fb(){
    int i;
    for(i=1;i<=100;i++){
        char out[9];
        strcpy(out, "");
        if(!(i%3))
            strcat(out, "Fizz");
        
        if(!(i%5))
            strcat(out, "Buzz");

        if(!strlen(out))
            snprintf(out, 3, "%i", i);

        printf("%s\n", out);
    }
}

//More concise fizzbuzz.
void fb2(){
    int i;
    for(i=1;i<=100;i++){
        int j = 0;
        if(!(i%3)) j += printf("Fizz");
        if(!(i%5)) j += printf("Buzz");
        if(!j) printf("%d", i);

        printf("\n");        
    }
}

//Most naive fizzbuzz attempt.
void main(){
    /*int i;
    for(i=1;i<101;i++){
        if(!(i%3) && !(i%5))
            printf("FizzBuzz");
        else if(i%3==0)
            printf("Fizz");
        else if(i%5==0)
            printf("Buzz");
        else
            printf("%d", i);
        printf("\n");
    }*/
    fb2();
}
