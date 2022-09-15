#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long gt(int a , int b) {
  int k = abs(a);
  int n = abs(b);
  for(long long i = min(k , n) ; i >= 1 ; i--)
  {
    if(k % i == 0 && n % i == 0)
    return i;
  }
  return n;
}

int main()
{
  long long a,b;
  cin >> a >> b;
  cout << gt(a,b) << endl;
  return 0;
}