#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b;
    int sum = 0;
    cin >> a >> b;
    for(int k = (b - 1) ; k > a ; k--)
    {
      if (k % 3 == 0)
      {
        cout << k << " ";
        sum += 1;
      }
    }
    if (sum == 0)
    cout << "NOT FOUND";
    return 0;
}