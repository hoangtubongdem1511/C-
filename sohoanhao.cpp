#include<iostream> 

using namespace std; 
	
bool Check_Per(int n){  
	long long sum = 0;
	if(n < 6){ 
		return false;
	}  
	for(long long i = 1; i <= n; i++){ 
		sum += i; 
		if(sum == n){ 
			return true;
		}
	}
	return false;
}
int main(){ 
	long long n; 
	cin >> n;
	if(Check_Per(n)){ 
		cout << "YES";
	}else{ 
		cout << "NO";
	}
return 0;
}