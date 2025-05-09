#include <stdio.h> 
#include <string.h>

void happyBirthday(char fay[], int ruz){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", fay);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", ruz);


    // isi void harus sama dengan dalamnya, tapi ndak harus sama dengan di main
}

int main() {

    // function = A reusable section of code that can be invoked "called"
    //                    Arguments can be sent to a function so that it can use them

    char name[50] = "";
    int age = 0;
    char susah[50] = "";
    int umur = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);

    printf("\nlagi lagi, Enter your name!:");
    getchar();
    fgets(susah, sizeof(susah), stdin);
    susah[strlen(susah) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &umur);

    happyBirthday(susah, umur);

    return 0;
}