#include <iostream>

/*ini komen halo */

using namespace std;

void FungsiLayanan();

void FungsiLayanan1 () {
int NomorLayanan1;
cout << "1. Kembali\n2. Keluar" << endl;
cin >> NomorLayanan1; 
    if (NomorLayanan1 == 1) {
        FungsiLayanan();
    }
            else if (NomorLayanan1 == 2) {
                cout << "Terima Kasih Sudah Memakai Layanan Kami!\n";
                return;
                }
                    else {
                        cout << "Invalid!" << endl;
                        FungsiLayanan1();
                        }
}


void FungsiLayanan () {
    int NomorLayanan;
    int NomorLayanan1;
    string SaldoAwal = "Rp 0";
    int i = 0;

    while (i == 0) {
        cout << "Pilih Layanan!\n1. Cek Saldo\n2. Setor Tunai\n3. Ambil Tunai\n4. Transfer" << endl;
        cin >> NomorLayanan;
        switch (NomorLayanan) {

             case 1 : 
                cout << SaldoAwal <<  endl;
                FungsiLayanan1();
                break;
             
                
        }


    

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

    

    

    cout << "********* BANK JAGO *********" << endl;
    cout << "Masukkan Nomer Kartu!" << endl;
    cin >> NomorKartuDia;
    if (NomorKartuDia == NomorKartu) {
        cout << "Masukan Password!\n";
        cin >> PasswordDia;
        
            if (PasswordDia == Password) {
                FungsiLayanan ();

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



   










    return 0;

}
