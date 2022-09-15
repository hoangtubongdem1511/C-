// S = x + x^2 / 2! + ... + x^n / n!

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

long long gt(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * gt(n - 1);
    }
}


int main() {
    int n,x;
    cin >> n >> x;
    float sum = 0;
    for (int i = 1 ; i <= n ; i++){
        sum += (pow(x,i) / gt(i));
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}