#include <stdio.h>

int main(void){
    long int seconds;
    int hh, mm, ss;

    printf("Enter a number of seconds: ");
    scanf("%ld", &seconds);

    hh = seconds/3600;
	mm = (seconds - hh*3600)/60;
	ss = seconds - hh*3600 - mm*60;

    printf("");

    return 1;
}