#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    
    while (cin >> a) {
    int lenght = a.length();
    if (a[0] == a[lenght - 1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    return 0;
}


