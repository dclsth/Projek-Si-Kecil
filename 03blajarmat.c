#include <stdio.h>
#include <math.h>


int main()
{
    float x = 0.0f;
    float y = 0.0f;
    double z = 0.0f;

    
    z = pow(x,y);

    printf("Angka 1 = ");
    scanf("%f", &x);

    printf("Angka 2 = ");
    scanf("%f", &y);

    z = pow(x,y);
    z = sqrt(z);
    

    printf("%.1f ^ %.1f kemudian di akar hasilnya %.1lf. ",x,y,z);
    
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