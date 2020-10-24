#include <stdio.h>

void flush(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){

    }
}

struct Person
{
    char name[50];
    int age;
    float height;
    char hairColour[15];
} person;


int main(void){

    printf("Name: ");
    scanf("%49s", &person.name[0]);
    
    printf("Age: ");
    scanf("%d", &person.age);

    printf("Height: ");
    scanf("%f", &person.height);

    printf("Hair Colour: ");
    scanf("%14s", &person.hairColour[0]);

    printf("\n\n");

    printf("Your information:\nName: %s\nAge: %d\nHeight: %.2f\nHair Colour: %s\n", person.name, person.age, person.height, person.hairColour);

    return 1;
}