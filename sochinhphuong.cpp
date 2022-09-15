#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    long long b;
    cin >> a;
    b = sqrt(a);
    if (b*b == a)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
	return 0;
}
