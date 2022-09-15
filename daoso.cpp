#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "nhap n: " ;
    cin >> n;
    if (n > 0) {
        while (n--) {
            int t;
            cout << "nhap gia tri can dao: " ;
            cin >> t;
            cout << t << "-->" ;
            int tDao = 0;
            while (t) {
                tDao = tDao*10 + t%10;
                t = t / 10;
            }
            cout << tDao << endl;  
        }
        
    }
    return 0;
}

