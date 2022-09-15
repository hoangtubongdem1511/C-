#include <iostream>
#include<cmath>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n == 0) 
    {
        cout << "INF";
    } 
    
    else 
    {
        if (n > 0) 
        {
            for (int i = n ; i >= 1 ; i--) 
                if (n % i == 0) 
                cout << i <<  " ";
        }
        else 
        {
            int j = abs(n);
            for (int k = j ; k >= 1 ; k--) { 
                if (j % k == 0) 
                cout << k <<  " ";
            }    
        }
    }
    return 0;
}