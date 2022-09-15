#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main()
{
 
    float a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    if(a == 0) {
        // a== 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
        if(b == 0) {
            if (c == 0) {
                cout << "INF" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << -c/b << endl;
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << fixed << setprecision(2) << x2 << endl;
            cout << fixed << setprecision(2) << x1 << endl;
        } else if ( delta == 0) {
            cout << -b/2*a << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}