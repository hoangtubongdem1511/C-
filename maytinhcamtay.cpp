#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a,b;
    char phepTinh;
    cin >> a >> phepTinh >> b;
    switch (phepTinh)
    {
    case '+':
        cout << fixed << setprecision(2) << a + b << endl;
        break;

    case '-':
        cout << fixed << setprecision(2) << a - b << endl;
        break;

    case '*':
        cout << fixed << setprecision(2) << a * b << endl;    
        break;

    case '/':
        if (b != 0) {
            cout << fixed << setprecision(2) << a / b << endl;
        } else {
            cout << "Math Error" << endl;
        }
        break;

    default:
        break;
    }
    return 0;
}