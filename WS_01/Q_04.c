#include <stdio.h>

//reaches approx ~2.2 trillion and turns negative, stars counting up from -2.2T to 0
//This is due to an integer overflow, where the value being stored is greater than the amount of memory given to the variable can hold

int main(void){
    int num = 0;

    for(int i = 0; i < __INT32_MAX__; i++){
        num += 10000;
        printf("%d\n", num);
    }

    return 1;
}