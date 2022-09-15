// Tìm kiếm mảng V2
#include <iostream>
using namespace std;

void searchElement(int a[] , int x) {
    int count = 0;
    for (int i = 0 ; i < 10 ; i++) 
        if (x == a[i]) {
            count++;
            cout << i + 1 << " ";
    }
    if (count == 0) {
        cout << -1;
    }
    
}


int main() {
    int a[11], x;
    for (int i = 0; i < 10; i++) 
        cin >> a[i];
    cin >> x;
    
    searchElement(a , x);
	return 0;
}