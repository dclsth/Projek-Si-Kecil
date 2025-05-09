#include <stdio.h> 
#include <windows.h> // Windows
#include <unistd.h> //Linux/Mac


int main() {

    // for loop = Repeat some code a limited # of times
    //                   for(Initialization; Condition; Update)
    int h = 00;
    int m = 00;
    int s = 00;
    for(h; h < 60; h++){
        
            for(m; m < 3; m++){
        
                 for(s; s < 5; s++){
                Sleep(1000); // Windows
                printf("%d:%d:%d\n", h,m,s);
            }
            Sleep(1000); // Windows
             printf("%d:%d:%d\n", h,m,s);
             s = 00;
        }
        Sleep(1000); // Windows
        printf("%d:%d:%d\n", h,m,s);
        m == 00;

    }

    printf("HAPPY NEW YEAR!");

    return 0;
}

/*
int main() {

    // for loop = Repeat some code a limited # of times
    //                   for(Initialization; Condition; Update)

    for(int i = 10; i >= 0; i--){
        //Sleep(1000); // Windows
        //sleep(1); // Linux/Mac
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    return 0;
}
    */