#include <stdio.h>

void main(){
    int num = 980;
    int denom = 98;
    printf("Input numerator: ");
    scanf("%i", &num);
    printf("And denominator: ");
    scanf("%i", &denom);
    while(num-denom>=0){
        num = num-denom;
    }
    printf("Remainder is: %i\n", num);
}
