#include <iostream>
#include<cmath>
using namespace std;

bool gt(int n) {
    if (n < 2) 
    {
        return false;
    } 
    else {
        for (int i = 2 ; i <= sqrt(n)  ; i++) {
            if (n % i == 0) {
                return false;
            }  
        }
    }
    return true;
}


int main () {
    int n;
    cin >> n;
    if (gt(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}