#include <iostream>

using namespace std;

int main()
{
    int i, a[10], b[5], c[8];
    cout << "Massiv A imeet vid: ";
    for (i = 0; i < 10; i++)
    {
        a[i] = rand() % 100 - 50;
        cout << a[i] << " ";
    }
    cout << "\nMassiv B imeet vid:";

        for (i = 0; i < 5; i++)
        {
            b[i] = a[i];
            cout << b[i] << " ";
        }
        cout << "\nMassiv C imeet vid:";

        for (i = 0; i < 3; i++)
            c[i] = a[i + 1] + 2;
    for (i = 3; i < 8; i++)
    {
        c[i] = b[i - 3];
        cout << c[i] << " ";
    }
    return 0;
}