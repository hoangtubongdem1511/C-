/*
#include<stdio.h>
#include<conio.h>
int a[100];
void main()
{
	int i, j, n, k, dem = 0;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i + 1);
		scanf("%d", &a[i]);
	}
	printf("mang da nhap:\n");
	for (i = 0; i < n; i++) 	
	{
		printf(" %d ", a[i]);
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				for (k = i; k < n; k++) 
				{
					a[k] = a[k + 1];
					n--;
					i--;
				}
			}
		}
	}
	printf("\nmang sau khi xoa la:\n");
	for (i = 0; i < n; i++) 
	{
		printf(" %d ", a[i]);
	}
 _getch();

}
*/

#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
int t = 0;
cin >> t;
string s;
cin.ignore();
while (t--) {
getline(cin ,s);
int count = 0;
for (unsigned int i = 0; i < s.length(); i++)
if (s[i] == ' ' && s[i] != s[i + 1])
count++;

    cout << count << endl;
}
return 0;
}