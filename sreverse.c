#include <stdio.h>
#include <string.h>

void main(){
    printf("Enter a string (max 99 characters): ");
    char phrase[100];
    gets(phrase);
    int i = 0, j = strlen(phrase); //assign j to overcome preprocessor expansion.
    char out[100];
    memset(out, 0, sizeof(out));
    while(i<=j-1){
        out[j - i] = phrase[i];
        i++;

    }

    printf("%s\t%d\n", phrase, i);

}
