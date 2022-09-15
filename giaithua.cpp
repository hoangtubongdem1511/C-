#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 1;
    cin >> n;
    if (n <= 12) {
        for (int i = 1 ; i <= n ; i++) {
        sum *= i;
    }
    cout << sum << endl;
    return 0;
    }
}