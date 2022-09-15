// Số lần xuất hiện trong mảng
#include<iostream>
using namespace std;

int main() {
   int n,x;  
   cin >> n >> x;
   int a[n];
   int count = 0;

   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }

   for (int i = 0; i < n; i++) {
      if (x == a[i])
      count += 1;
   }
   cout << count;
   return 0;
}
   

