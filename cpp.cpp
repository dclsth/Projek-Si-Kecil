#include <iostream>
#include <string>


using namespace std;
int main() {
    string jawaban;
    string pacar = "Fairuz Ananta";
    while (jawaban != pacar) {
         cout << "Siapa pacar Dara Calistha Putri Kindy?" << endl;
         getline(cin, jawaban);  
    }
    cout << "Kamu Bener!!";
    return 0;
}

/*
#include <iostream>
#include <string>

using namespace std;

int main()
{
string Jawaban;
string pacar = "Fairuz";

    while (false){
        cout << "Siapa pacar Dara Calistha Putri Kindy?" << endl;
    getline(cin, Jawaban);

    if (Jawaban == pacar){
    break;
    }
    
    }
    cout << "Kamu Bener!!";

    return 0;
}
 */