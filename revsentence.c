#include <stdio.h>
#include <string.h>

//Reverse input sentence.
void main(){
    char input[256], rev[256];
    printf("Input a sentence (Max length: 255):");
    gets(input);
    memset(rev, 0, sizeof(input));
    int size = strlen(input)-1, i=strlen(input)-1, j=0, k=0, end, start;
    while(i>=0){
        int end=-1;
        if(input[i] == ' ' || i == 0){
            start = i;
            int l=0;
            if(i==0){
                rev[k++] = ' ';
                rev[k++] = input[i];
            }
            else
                rev[k++] = ' ';

            for(j=start+1;j<=size && input[j] != ' '; j++){
                rev[k++] = input[j];
                l++;
            }
        }

        i--;
    }
    
    printf("%s\n", rev);
    
}
