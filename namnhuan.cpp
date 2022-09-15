//Năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100

#include <iostream>

using namespace std;
int main() {
    int year;
    cin >> year;
    if (year > 0 && year <= 100000)  {
        if (year % 4 == 0 && year % 100 != 0) {
            cout << "YES" << endl;  
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "INVALID" << endl;
    }
    return 0;
}