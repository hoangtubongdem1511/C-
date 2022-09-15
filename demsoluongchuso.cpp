#include <iostream>
using namespace std;

long long  C(int n) {
    int sum = 0; 
    while (n) {
        n /= 10;
        sum += 1;
    }
    return sum; 
}

int main() {
    long long n;
    cin >> n;
    cout << C(n) << endl;
    return 0;
}
