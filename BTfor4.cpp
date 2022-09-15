// 1 + 1 / (1 + 2) + ... + 1 / (1 + 2 + ... + n)
//ví dụ như : s=1+2+3+...+n = n*(n+1)/2
// do đó 1/s = 2 * (1/n - 1/(n+1))
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    double n,t;
    cin >> n;
    while (n--) {
        cin >> t;
        double sum = (2*t)/(t+1);
        cout << fixed << setprecision(8) << sum << endl;
    }
    return 0;
}