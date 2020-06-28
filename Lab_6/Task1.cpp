#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str, tmp;
    cout << "enter str: ";
    cin >> str;
    tmp = str;
    reverse(str.begin(), str.end());
    if (str == tmp)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}