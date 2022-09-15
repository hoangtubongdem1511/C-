// tìm số lớn nhất của mảng

#include <iostream> 
#include <algorithm> 
using namespace std;

int main() {
    int n;  
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    int max = a[0];
    sort (a , a + n);

    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}