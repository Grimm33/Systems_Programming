#include <stdio.h>

int main(void){
    int n;
    _Bool check = 0;

    while(!check){

        printf("Enter a number between 1 and 100: ");
        scanf("%d", &n);

        if(n < 0){
            printf("That number is too small. Please try again.\n");
        }else if(n > 100){
            printf("That number is too large. Please try again.\n"); 
        }else{
            printf("Your number is %d\n", n);
            check = 1;
        }
    }

    return 1;
}