// Trung bình cộng
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;  
    int a[n];
    float count = 0, sum = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
        count++;
        sum += a[i];
        }
    }
    cout << setprecision(4) << fixed << sum / count << endl;
    return 0;
}