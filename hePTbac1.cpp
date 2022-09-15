// pp thế
/*
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double a,b,c,d,e,f,x,y;
    cin >> a >> b >> c >> d >> e >> f;
    if ((b * d - a * e) == 0 && (e * c - b * f) == 0) {
            cout << "VOSONGHIEM";
        } else if ((b * d - a * e) == 0 && (e * c - b * f) != 0) {
            cout << "VONGHIEM";
    } else {
        x = (b * f - e * c) / (b * d - a * e);
        y = ((c * b * d - c * a * e) - (a * b * f - a * e * c)) / (b * b * d - b * a * e);
        cout << fixed << setprecision(2) << x << " " << y;
    }
    return 0;
}
*/

// pp cramen
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double a,b,c,d,e,f,D,Dx,Dy,x,y;
    cin >> a >> b >> c >> d >> e >> f;
    D = a * e - b * d;
    Dy = a * f - d * c;
    Dx = c * e - b * f;
    if (D == 0) {
        if (Dx == 0 && Dy == 0) {
            cout << "VOSONGHIEM";
        } else if (Dx != 0 || Dy != 0) {
            cout << "VONGHIEM";
        }
    } else {
        x = Dx / D;
        y = Dy / D;
        if(x == -0.0 ) x = fabs(x);
		if(y == -0.0 ) y = fabs(y);
        cout << fixed << setprecision(2) << x << " " << y;
    }
    return 0;
}


