#include <stdio.h> 
#include <stdbool.h> 

int main() {

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 0;
    bool isSunny = true;
    printf("suhu diluar brp bos = ");
    scanf("%d", &temp);

    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD\n");
    }
    else{
        printf("The temperature is BAD\n");
    }

    if(!isSunny){
        printf("It is CLOUDY outside\n");
    }
    else{
        printf("It is SUNNY outside\n");
    }

    return 0;
}