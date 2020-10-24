#include <stdio.h>

int main(void){
    int numbers[10];
    
    for(int i = 0; i < 10; i++){
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\n\n");

    for(int i = 0; i < 10; i++){
        printf("Number %d: %d\n", i + 1, numbers[i]);
    }

    return 1;
}