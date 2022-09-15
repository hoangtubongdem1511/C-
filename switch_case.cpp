#include <iostream>
using namespace std;

int main() {
    char choise;
    cout << "============================\n";
    cout << "Dau la thu do cua HN\n ";
    cout << "A. Ha noi\n ";
    cout << "B. TPHCM\n ";
    cout << "C. Da lat\n ";
    cout << "D. Nghe an\n ";
    cin >> choise;
    switch (choise)
    {
        case 'A':
            cout << "chinh xac" << endl;
            break;

        case 'B':
            cout << "sai bet" << endl;
            break;

        case 'C':
            cout << "sai bet" << endl;
            break;

        case 'D':
            cout << "sai bet" << endl;
            break; 

        default:
            break;
    }
    cout << "===========================";
    return 0;
}
