#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n , a[1005] , L[1005] = {0};
    int res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    for (int i = 1 ; i <= n ; i++) {
        L[i] = 1;
        for (int j = 1 ; j < i ; j++) {
            if (a[i] > a[j])
            L[i] = max(L[i] , L[j] + 1);
        }
        res = max(res, L[i]);
    }
    cout << res;
}