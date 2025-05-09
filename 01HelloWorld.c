#include <stdio.h> //standard input outpu
#include <stdbool.h> //standard bool
#include <string.h>

int main() {


    int aselole = 23; //angka mudah 1 byte
    int asek = 223;
    int testes = 1;
    int testes2 = 11;
    int testes3 = -111;
    int x = 2;
    float y = 3;
    int z = 0;
    
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; //null terminator
    char name[30] = "";

    z = x + y;

    float contoh = 2.4; //angka desimal pendek 4 byte
    float harga = 2.11231233123;
    float suhu = -10;
    double harga2 = 2.12312312391823719823; //angka desimal panjang 8 byte
    char nilai = 'A'; //simbol huruf dkk satu saja 1 byte
    char simbol = ';' ;
    char anjay[] = "anjay mabar dafanta07"; //string ato kalimat panjang ... byte
    bool isOnline = true ; //bool untuk true false, bisa pake 1 / 0 1 byte, perlu <stdbool.h>
    bool isOffline = false ;

    printf("umur lu :");
    scanf(" %d", &age);
    printf("nilai lu :");
    scanf(" %f", &gpa);
    printf("grade lu :");
    scanf(" %c", &grade);
    getchar();
    printf("name lu :");
    //scanf("%s", &name);
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

 
    printf("\numur lu %d \n", age);
    printf("nilai lu %.2f \n", gpa);
    printf("grade you %c \n", grade);
    printf("name lu %s \n", name);
/*
    printf("tes int %d \n", aselole);
    printf("tes int %d sisan\n\n", asek);
    printf("%+1d \n", testes); //1 angka
    printf("%+2d \n", testes2); //2 angka
    printf("%+05d \n", testes2); // 5 angka, space diberi 0
    printf("%+-5d \n", testes2); // 5 angka, space setelah angka
    printf("%+5d \n\n", testes3);  // 5 angka, space sebelum angka dan ada tanda pos neg

    printf("tes float %f \n", contoh);
    printf("tes float %+7.1f sisan \n", contoh);
    printf("tes float %.1f° lomaneh\n", suhu);
    printf("tes float $%.2f maneh \n\n", harga);
    
    printf("tes double $%.15lf  \n\n", harga2);

    printf("tes char %c  \n\n", nilai);

    printf("tes char[] \"%s\"  \n\n", anjay );

    printf("tes bool %d  \n", isOffline);
    printf("tes bool %d maneh \n\n", isOnline);

    if(isOnline){
        printf("tes if if \n\n");       
    }
    else {
        printf("tes else else\n\n");
    }
    
    if(isOffline){
        printf("tes if if \n\n");       
    }
    else {
        printf("tes else else\n\n");
    };

    printf("jangan lupa selalu pakai \"%c\" awokawkoaowkwako \n\n", simbol);
    
    printf("lol awokawkoaowkwako\n");
    printf("i am fairuz \n");
    printf("1\t2\t234234234\t4\n");
    printf("\"lol\" awokawkoaowkwako\n\n");


    printf ("%.1f\n", y/x); // / bagi, * kali, + tambah, - kurang, % mod, ++ plus 1, -- min 1

    while(z<=10){
        printf("%d\n", z);
        z++;

    }
    return 0;
*/
}