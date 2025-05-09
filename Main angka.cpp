#include <iostream>

using namespace std;

void mulai (string Name) {

cout << "\nHi lagi " << Name << " !" << endl;
}
double Kuadrat (double num1){
return num1 * num1;
}

int main()
{

    string Name;
    cout << "masukkan nama: ";
    getline (cin, Name);

    cout << "Hi " << Name << "!" << endl;

    string Hi;
    getline (cin, Hi);

    string YaTidak;
    cout << "Main angka yuk! Siap?" << endl;
    getline (cin, YaTidak);
     cout << "yukk main! Coba masukkin suatu angka deh" << endl;

     int angka;
     cin >> angka;

    if (angka > 10 & angka < 20)
      cout << "Angka Ini lebih dari 10 loh" << endl;

      else if (angka > 20 & angka < 30)
        cout << "Angka ini lebih dari 20 loh" << endl;

        else if (angka <= 10)
            cout << "ini angkanya kurang dari sama dengan 10" << endl;

            else if (angka > 30 & angka < 40)
                cout << "ini sih lebih dari 30" << endl;

                else if (angka > 40 & angka < 50)
                    cout << "kalo yang ini lebih dari 40!" << endl;

        else
            cout << "wahhh ini sih angkanya besarr" << endl;


            int angkalagi;
            cout << "\nMasukkin angka lagi!" << endl;

            cin >> angkalagi;

               if (angkalagi > 10 & angkalagi < 20)
      cout << "Angka Ini lebih dari 10 loh" << endl;

      else if (angkalagi > 20 & angkalagi < 30)
        cout << "Angka ini lebih dari 20 loh" << endl;

        else if (angkalagi <= 10)
            cout << "ini angkanya kurang dari sama dengan 10" << endl;

            else if (angkalagi > 30 & angkalagi < 40)
                cout << "Angka ini sih lebih dari 30" << endl;

                else if (angkalagi > 40 & angkalagi < 50)
                    cout << "Angka ini lebih dari 40!" << endl;

        else
            cout << "wahhh ini sih angkanya besarrr" << endl;

            string mainLg;
            cout << "\nLanjut?" << endl;
            cin >> mainLg;

            mulai (Name);
            int num1;
            cout << "\nKali ini belajar kuadrat ya!\n\nMasukkan angka!" << endl;

            cin >> num1;


            cout << "Hasil dari " << num1 << " dikuadratkan adalah " << Kuadrat (num1) << "!\n";

            cout << "Yuk lanjut hitung2an!\n";


             cout << "Masukkan angka pertama!" << endl;
             int angkapenting1;
             cin >> angkapenting1;
             cout << "Masukkan angka kedua!"<< endl;
             int angkapenting2;
             cin >> angkapenting2;

             cout << "\nPilih! \n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian" << endl;
            int Pilihan;
            cin >> Pilihan;



             if (Pilihan == 1){
                 cout << "Hasil Penjumlahan dari " << angkapenting1 << " dan " << angkapenting2 << " adalah " << angkapenting1 + angkapenting2 << endl;
             }

             else if (Pilihan == 2) {
                 cout << "Hasil Pengurangan dari " << angkapenting1 << " dan " << angkapenting2 << " adalah " << angkapenting1 - angkapenting2 << endl;
             }

             else if (Pilihan == 3) {
                 cout << "Hasil Perkalian dari " << angkapenting1 << " dan " << angkapenting2 << " adalah " << angkapenting1 * angkapenting2 << endl;
             }

             else if (Pilihan == 4) {
                 cout << "Hasil Pembagian dari " << angkapenting1 << " dan " << angkapenting2 << " adalah " << angkapenting1 / angkapenting2 << endl;
             }

             else {
                cout << "Tidak dimengerti" << endl;
             }



    return 0;
}
