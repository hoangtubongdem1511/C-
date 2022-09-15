//S=(2+3+4...+n)+2n

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 2 ; i <= n ; i++) {
        sum += i;
    }
    int tong = sum + 2*n;
    cout << tong << endl;
    return 0;
}