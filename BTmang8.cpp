// Tìm số nguyên tố
#include <iostream>
#include <cmath>
using namespace std;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(int a[], int n){	
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
	        if(a[i] > a[j])  //nếu có nghịch thế thì đổi chỗ
		        Swap(a[i], a[j]);
}


void Xoa(int a[], int &n, int vitrixoa){ // Xóa phần tử bị trùng
    for (int i = vitrixoa ; i < n ; i++) {
        a[i - 1] = a[i];
    }
    n--;
}

void Xoaphantu(int a[], int &n) {	
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
	        if(a[i] == a[j])  {
                Xoa(a , n , j);
                i--;
            }
        }
    }            
}

bool gt(int n) {
    if (n < 2) 
    {
        return false;
    } 
    else {
        for (int j = 2 ; j <= sqrt(n) ; j++) {
            if (n % j == 0) {
                return false;
            }  
        }
    }
    return true;
}

void printarray(int a[] , int n) {
    for (int i = 0 ; i < n ; i++) {
        if (gt(a[i]))
        cout << a[i] << " ";
    } 
}


int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    InterchangeSort(a , n);
    Xoaphantu(a , n);
    printarray(a , n);
} 