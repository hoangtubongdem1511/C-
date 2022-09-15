#include <iostream>
using namespace std;

int main() {
    double n,k,j,L,F;
    double N = 1; 
    double K = 1;
    double M = 1;
    cin >> n >> k;
    j = n - k;
    if (1 <= k <= n <= 25) {
        for (int i = 1 ; i <= n ; i++) {
            N *= i;
        }

        for (int i = 1 ; i <= k ; i++) {
            K *= i;   
        }

        for (int i = 1 ; i <= j ; i++) {
            M *= i;
        }
        L = K * M;
        F = N / L;
        cout << F << endl;
        return 0;
    }
} 

/* #include <iostream>
using namespace std;

double gt(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * gt(n - 1);
    }
}


double C(int n , int k) {
    return gt(n) / (gt(k) * gt(n - k));
}

int main() {
    int n,k;
    cin >> n >> k;
    cout << C(n , k) << endl;
    return 0;
}

*/