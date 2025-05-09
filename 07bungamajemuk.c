#include <stdio.h>
#include <math.h>


int main()
{
    double principal = 0.0;
    double interest = 0.0;
    int years = 0; // ubah jadi int karena pake bilangan bulat
    int times = 0; // ini keknya mending pake int jg
    int total = 0; // ini jg


    
    printf("ngitung bunga majemuk jiiirr\n");
    printf("Brp duit awal bos = ");
    scanf("%lf", &principal);
    printf("Brp persen bunganya itu bos = ");
    scanf("%lf", &interest);
    printf("Brp lama nabungny itu bos = ");
    scanf("%d", &years);
    printf("itu bunga tiap brp bulan bos = ");
    scanf("%d", &times);

    total = principal * pow((1 + (interest/100.0)/times),years);


    printf("jadi, setelah %d tahun lu nabung, duit lu jadi Rp.%d ", years, total);

    /*
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);
   
    printf("After %d years, the total will be $%.2lf", years, total);
    */




    /*
    x = sqrt(x);
    x = pow(x, 4);
    x = round(3.14);
    x = ceil(x);
    x = floor(x);
    x = abs(x);
    x = log(x);
    x = sin(x);
    x = cos(x);
    x = tan(x);
    */


    return 0;
}