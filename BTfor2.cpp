// S = 1 - 2 + 3 - ... + (3n + 1), n chẵn
// s = 1 - 2 + 3 - ... - (3n + 1), n lẻ

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int s = 0;
    cin >> n;
    for (int i = 0 ; i <= (3*n + 1) ; i++) {
        if (i % 2 == 0) {
                s -= i;
            } else {
                s += i;
        }
    }
    cout << s << endl;
    return 0;
}