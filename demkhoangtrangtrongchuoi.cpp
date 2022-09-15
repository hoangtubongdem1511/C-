#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char a[1000];
    
    while (n--) {
    cin.getline(a , 999);
    int count = 0;
    int lenght = strlen(a);
    for (int i = 0 ; i < lenght ; i++) {
        if (a[i] == ' ' && a[i - 1] != ' ')
            count++;
    }
    cout << count << endl;
    }
    return 0;
}