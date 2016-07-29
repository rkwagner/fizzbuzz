#include <stdio.h>

//Output true if palindrome, else false.
void main(){
    char str[500], out[500];
    printf("Enter a word/phrase to see if there is a palindrome: ");
    gets(str);
    int i = 0, j = 0;
    for(i=0;str[i] != '\0';i++){
        if(str[i] != ' '){
            out[j] = str[i];
            j++;
        }
    }
    out[j] = 0;
    int length = j-1;
    for(i=0;i <= length/2+1;i++){
        if(out[i] != out[length-i]){
            printf("False\n");
            return;
        }
    }
    printf("True\n");
}
