#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,x;
        long long sum = 0;
        cin >> n;
        while (n) {
            x = n % 10;
            sum += x;
            n /= 10;
        }
        cout << sum << endl;
    }
        return 0;
}