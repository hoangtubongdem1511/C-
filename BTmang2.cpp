// tính tổng giá trị n phần tử
#include <iostream>
using namespace std;
//Made by vancongnam at 13/09/2021

int Linear(int *a , int n) {
    if (n == 1) return a[0];
    else 
    return Linear(a , n - 1) + a[n - 1];
}

void printarray(int*a , int n) {
    for (int i = 0 ; i < n ; i++) {
        cout << a[i] << " ";
    } 
}

int main() {
    int n;
    cin >> n;  
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    printarray(a , n);
    cout << "\n" << Linear(a , n);
}    