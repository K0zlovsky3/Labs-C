#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int mass[31], index = 0;
    for (int num = 0; num <= 30; num++)
    {
        mass[num] = num + 1;
        cout << "Index " << num << " = " << mass[num] << endl;
    }

    cout << "\n Enter the index you want to change: ";
    cin >> index;
    cout << endl;
    mass[index] = 0;
    for (int num = 0; num != 30; num++)
    {
        cout << "Index " << num << " = " << mass[num] << endl;
    }
    exit(0);
    return 0;
}