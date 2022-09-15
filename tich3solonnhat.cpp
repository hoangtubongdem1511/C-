// Tích 3 số lớn nhất
#include<iostream>
#include<math.h>
using namespace std;

void swap(int &a , int &b) {
	int tg = a;
	a = b;
	b = tg;
}

void Interchangesort(long long a[], int n) {
	for (int i = 0 ; i < n - 1 ; i++)
		for (int j = i + 1 ; j < n ; j++) {
			if (a[i] > a[j])
				swap(a[i] , a[j]);
		}
}



int main() {
    long long n, x;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];
	
	Interchangesort(a , n);
	for (int i = 0 ; i < n ; i++) {
		x = max(a[0] * a[1] * a[n- 1] , a[n - 3] * a[n -2] * a[n - 1]);
	}
	cout << x;
	return 0;
}

