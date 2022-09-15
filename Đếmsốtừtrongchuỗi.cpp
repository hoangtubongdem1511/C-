#include <iostream>
using namespace std;

int main()
{
    char a[100005];
    cin.getline(a , 100004);

    int count = 0;
    int lenght = strlen(a);
    if (a[0] != ' ') {
        count++;
    }
    for (int i = 0 ; i < lenght ; i++) {
        if (a[i] == ' ' && a[i + 1] != ' ' && a[i + 1] != '\0')
            count++;
    }
    cout << count << endl;
    return 0;
}