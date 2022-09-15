#define _use_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
    float r;
    cin >> r ;
    cout << fixed << setprecision(3) << r*2*3.14 << "\n" ;
    cout << fixed << setprecision(3) << pow(r,2)*3.14 << endl;
	return 0;
}