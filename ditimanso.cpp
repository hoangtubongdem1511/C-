// Tìm x nguyên dương lớn nhất, biết 1 + 2 + 3 + ... + x <= n
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long n,m;
  long sum = 0;
  cin >> n;
  for (long i = 0 ; i < n ; i++) {
    sum += i;
    if(sum > n) {
      m = i - 1;
      break;
    }
  }
  cout << m;
  return 0;
}