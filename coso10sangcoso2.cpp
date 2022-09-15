#include<iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    long long int sum = 0;
    long long int k = 1;
    if (t > 0) {
    while (t--) {
        long long int n,i;
        long long int sum = 0;
        long long int k = 1;
        cin >> n;
    do {
        i = n % 2;
        sum = sum + (k * i);
        n = n / 2;
        k = k * 10;
    }
    while (n > 0);
    cout << sum << endl;
    }
    }
    return 0;
}