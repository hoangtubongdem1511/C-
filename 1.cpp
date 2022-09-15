#include <iostream>
#include <iomanip>
using namespace std;

long long F[1005];

long long Fi(int n) {
    if (F[n] != -1) {
        return F[n];
    }
    if (n == 0 || n == 1) {
        return F[n] = 1;
    }
    F[n] = Fi(n - 1) + Fi(n - 2);
    return F[n];
}


int main() {
    long long n;
    cin >> n;
    for (int i = 0 ; i <= n ; i++) {
        F[i] = -1;
    }
    cout << Fi(n);
    return 0;
}