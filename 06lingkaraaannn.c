#include <stdio.h>
#include <math.h>


int main(){

    double radius = 0.0;
    double area = 0.0;
    double surface = 0.0;
    double volume = 0.0;
    const double pi = 3.1415929; // const agar nda berubah

    printf("Radius Lingkaran = ");
    scanf("%lf", &radius);
    /*
    area = pi * radius * radius ;
    surface = 4 * pi * radius * radius ;
    volume = (4/3) * pi * radius * radius * radius ;
    */
   area = pi * pow(radius,2) ;
   surface = 4 * pi * pow(radius,2) ;
   volume = (4.0/3.0) * pi * pow(radius,3) ; //wajiub pake .0

    printf ("Luas = %.2lf\n", area);
    printf ("Luas Permukaan = %.2lf\n", surface);
    printf ("Volume = %.2lf\n", volume);




    
    
    return 0;
}