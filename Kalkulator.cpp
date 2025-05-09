#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double angka1, angka2;
    char Tanda;
    cout << "Masukkan angka pertama\n";
    cin >> angka1;
    cout << "Masukkan operasi\n";
    cin >> Tanda;
    cout << "Masukkan angka kedua\n";
    cin >> angka2;

    if (Tanda == '+')
    {
        cout << angka1 + angka2;
    }
    else if (Tanda == '-')
    {
        cout << angka1 - angka2;
    }

    else if (Tanda == '*')
    {
        cout << angka1 * angka2;
    }
    else if (Tanda == '/')
    {
        cout << angka1 / angka2;
    }
    else if (Tanda == '^'){
        cout << pow(angka1, angka2);
    }


    return 0;
}
