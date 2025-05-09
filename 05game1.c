#include <stdio.h>
#include <string.h>

int  main() {

    char satu[50] = "";
    char dua[50] = "";
    char tiga[50] = "";
    char empat[50] = "";
    char lima[50] = "";
    
    printf("kalimat unik ap ges = ");
    fgets(satu, sizeof(satu), stdin);
    satu[strlen(satu) - 1] = '\0';

    printf("nama orang ap ges = ");
    fgets(dua, sizeof(dua), stdin);
    dua[strlen(dua) - 1] = '\0';

    printf("sifat 1 ap ges = ");
    fgets(tiga, sizeof(tiga), stdin);
    tiga[strlen(tiga) - 1] = '\0';

    printf("sifat 2 ap ges = ");
    fgets(empat, sizeof(empat), stdin);
    empat[strlen(empat) - 1] = '\0';

    printf("sifat 3 ap ges = ");
    fgets(lima, sizeof(lima), stdin);
    lima[strlen(lima) - 1] = '\0';

    printf("\nHari ini hari yang %s.\n", satu);
    printf("Tadi pagi gw melihat %s\n", dua );
    printf("si %s ini sifatnya %s sama %s\n", dua, tiga, empat );
    printf("terus gw %s\n", lima );
    
    

    return 0;
}