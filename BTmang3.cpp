// Chỉ số mảng có giá trị lớn nhất
#include <iostream> 
#include <algorithm> 
using namespace std;

int maxElement(int a[] , int n) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

void getMax(int a[] , int n) {
    int maxValue = maxElement(a , n);
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == maxValue)
        index = i;
    }
    cout << index;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    getMax(a , n);
}