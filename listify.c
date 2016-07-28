#include <stdio.h>
#include <string.h>

void main(){
    char str[1000];
    int ints[1000] = {0};
    printf("Input a list of numbers (space separated): ");
    gets(str);
    int i, start=0,end=-1;
    for(i=0;i<=strlen(str);i++){
        if(str[i] == ' ' || i == strlen(str)){
            end = i-1;
            int j, k=0;
            char temp[100];
            for(j=start;j<=end;j++){
                temp[k++] = str[j];
            }
            temp[k] = '\0';
            int num = atoi(temp);
            start = i+1;
            ints[num]++;

        }
    }
    for(i=0;i<1000;i++){
        if(ints[i]>0){
            printf("%d(%d)\n", i, ints[i]);
        }
    }
}
