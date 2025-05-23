#include <iostream>

using namespace std;


void FungsiLayanan () {
    int NomorLayanan;
    int NomorLayanan1;
    string SaldoAwal = "Rp 0";
    int i;
    int NominalSetor;
    int Saldo;

     if (NomorLayanan1 != 1) {

    while (NomorLayanan1 != 1) {
        cout << "Pilih Layanan!\n1. Cek Saldo\n2. Setor Tunai\n3. Ambil Tunai\n4. Transfer" << endl;
        cin >> NomorLayanan;
        switch (NomorLayanan) {

             case 1 : 
                cout << SaldoAwal <<  endl;
                return;
                break;
             case 2 :
                 cout << "Masukkan Nominal!" << endl;
                 cin >> NominalSetor;

             
                
        }
    }
}
    

        else if (NomorLayanan1 == 1) {
            return;
        }


    

    }


    






int main()

{
    string SaldoAwal = "Rp 0";
    int NomorKartu = 12345678;
    int Password = 111124;
    int Kesempatan = 3;


    int NomorKartuDia;
    int PasswordDia;
    int NomorLayanan;
    int NomorLayanan1;
    int i;

    

    

    cout << "********* BANK JAGO *********" << endl;
    cout << "Masukkan Nomer Kartu!" << endl;
    cin >> NomorKartuDia;
    if (NomorKartuDia == NomorKartu) {
        cout << "Masukan Password!\n";
        cin >> PasswordDia;
        
            if (PasswordDia == Password) {
                FungsiLayanan ();

                /*

                if (NomorLayanan1 == 1) {
                    return 0;
                }       

                */

            }

            else {
                
                
                while (Kesempatan > 0 && Password != PasswordDia) 
                {
                    Kesempatan --;
                    cout << "Password Kurang Tepat!\nMasukan Password!\n";
                    cin >> PasswordDia;
                } 

            if (PasswordDia == Password) 
            {
                FungsiLayanan ();
            }
            else
            {
                cout << "Kamu Gagal!" << endl;
                return 0;

            }
                

               
                  
            }

    }

    else {
        cout << "Invalid Data!";
    }

    cout << "1. Kembali\n2. Keluar" << endl;
    cin >> NomorLayanan1;

        if (NomorLayanan1 == 1) {
            FungsiLayanan();
        }

        else if (NomorLayanan1 == 2) {
            cout << "Terima Kasih!" << endl;
            return 0;
        }



   










    return 0;

}