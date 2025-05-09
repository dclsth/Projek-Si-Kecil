#include <stdio.h>

int main() {

    // switch = An alternative to using many if-else statements
    //                 More efficient w/ fixed chareger values

    char bulan = '\0';
    char Januari = 'J';
    char Februari = 'F';
    char Maret = 'M';
    char April = 'A';
    char Mei = 'E';
    char Juni = 'U';
    char Juli = 'L';
    char Agustus = 'G';
    char September = 'S';
    char October = 'O';
    char November = 'N';
    char December = 'D'; 
    printf("Sekarang bulan apa: ");
    scanf("%c", &bulan);

    switch(bulan){
        case 'J':
            printf("Bulan kesatu");
            break;
        case 'F':
            printf("Bulan kedua");   
            break;
        case 'M':
            printf("BUlan ketiga");   
            break;
        case 'A':
            printf("BUlan keempattt");   
            break;
        case 'E':
            printf("BUlan kelima");   
            break;
        case 'U':
            printf("BUlan keenAm");   
            break;
        case 'L':
            printf("777");   
            break;
        case 'G':
            printf("delapaaan");   
            break;
        case 'S':
            printf("nonacantik ultah");   
            break;
        case 'O':
            printf("octoct");   
            break;
        case 'N':
            printf("kakfay ultah");   
            break;
        case 'D':
            printf("desember");   
            break;
            
        default:
            printf("nulis ap dek");
    }
    
    return 0;
}