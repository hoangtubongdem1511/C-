#include <iostream>
using namespace std;



void printarray(int a[] , int n) {
    for (int i = 0 ; i < n ; i++) {
        cout << a[i] << " ";
    } 
}


int main() {
    int n;
    int count = 0;
    
    while (cin >> n) {
        if (n == 0) {
            break;
        } else {
            if (n < 0) {
                cout << n << " ";
                count++;
            }
        }
    }


    if (count == 0) {
        cout << "NOT FOUND";  
    }
    return 0;
} 