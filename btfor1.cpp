// S= 1/2 + 1/3 + ... + 1/n

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    float n;
    float sum = 0;
    cin >> n;
    for (float i = 2 ; i <= n ; i++) {
        sum += 1/i;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}