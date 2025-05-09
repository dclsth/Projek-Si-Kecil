/*

#include <stdio.h>
#include <string.h>

int  main() {

    char barang[30] = "";
    float harga = 0.0f;
    int jumlah = 0;
    float total = 0.0f;

    printf("Mo beli ap ges = ");
    fgets(barang, sizeof(barang), stdin);
    barang[strlen(barang) - 1] = '\0';
    printf("Brp duit itu bos = ");
    scanf("%f", &harga);
    getchar();
    printf("Mo beli brp icibos = ");
    scanf("%d", &jumlah);

    total = harga * jumlah;

    printf("\nlu beli = %s\n", &barang );
    printf("%f", &total );

    return 0;
}

*/
#include <stdio.h>
#include <string.h>

int main() {
    char barang[30] = "";
    float harga = 0.0f;
    int jumlah = 0;
    float total = 0.0f;

    printf("Mo beli ap ges = ");
    fgets(barang, sizeof(barang), stdin);
    barang[strlen(barang) - 1] = '\0';
    printf("Brp duit itu bos = ");
    scanf("%f", &harga);

    printf("Mo beli brp icibos = ");
    scanf("%d", &jumlah);

    total = harga * jumlah;

    printf("\nlu beli = %s\n", &barang );
    printf("%f", total );

    return 0;
    // SHOPPING CART PROGRAM
    /*
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s/s\n", quantity, item);
    printf("The total is: %c%.2f", currency, total);
    
    return 0;
    */
}