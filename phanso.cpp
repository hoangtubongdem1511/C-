#include <iostream>
using namespace std;

int gt(int a , int b) {
  int k = abs(a);
  int n = abs(b);
  for(int i = min(k , n) ; i >= 1 ; i--)
  {
    if(k % i == 0 && n % i == 0)
    return i;
  }
  return n;
}


int main()
{
    int a,b;
    cin >> a >> b;
    if (b == 0)
    {
      cout << "INVALID";
    }
    else
    {
      if  (a % b == 0)
      {
          cout << a / b;
      }
      else
      {
        int j = a / gt(a,b);
        int l = b / gt(a,b);
        int tu = abs(j);
        int mau = abs(l);
        if (a < 0 && b > 0)
        {
          cout << "-" << tu << " " << mau;
        }
        else if (b < 0 && a > 0)
        {
          cout << tu << " " << "-" << mau;
        }
        else
        {
          cout << tu << " " << mau;
        }
      }
    }
    return 0;
}