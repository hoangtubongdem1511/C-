// Tìm kiếm trong mảng
#include <iostream>
using namespace std;

bool searchElement(int a[], int n , int x) {
    for (int i = 0 ; i < n ; i++) {
        if (x == a[i]) 
            return true;
    }
    return false;       
}

int main() {
    int n,x;  
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    if (searchElement(a , n ,x)) {
        cout << "YES";
	} else { 
		cout << "NO";
	}
}    