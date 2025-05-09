#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    int choice = 0;
    float weight = 0;
    const double convert = 2.20462;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice ( 1 / 2 ) = ");
    scanf("%d", &choice);
    
    
    if(choice == 1){
        printf("Enter your weight in Kilograms = ");
        scanf("%f", &weight);

        weight = weight * convert ;

        printf("You are %.2f Pounds.", weight);
    }
    
        else if (choice == 2){
            printf("Enter your weight in Pounds =");
            scanf("%f", &weight);
    
            weight = weight / convert ;
    
            printf("You are %.2f Kilograms.", weight);
    }
    else {

        printf("Invalid Choice!");
    }



    /*
     int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        // Kilograms to Pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if(choice == 2){
        // Pounds to Kilograms
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else{
        printf("Invalid choice! Please enter 1 or 2\n");
    }*/

    return 0;
}

