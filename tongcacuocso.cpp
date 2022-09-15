#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long gt(int a) {
  long long k = abs(a);
  long long s = 0;
  for(long long i = 1 ; i <= sqrt(k) ; i++)
  {
    if(k % i == 0) {
        int j = k/i;
			if (i == j) {
				s = s + i;
			} else {
				s = s + i + j;
			}
		}
	}
  return s;
}

int main()
{
  long long n;
  cin >> n;
  while (n--) {
  long long a;
  cin >> a;
  cout << gt(a) << endl;
  }
  return 0;
}

