#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void DelStr(double a[5][5], int StrNum)
{
    if(StrNum<0 && StrNum>=5)
        return;
        
    if(StrNum!=4)
    {
        for(int i=StrNum; i<4; i++)
            for(int j=0; j<5; j++)
                a[i][j]=a[i+1][j];
    }
                
    for(int j=0; j<5; j++)
        a[4][j]=0;
    
}

//void DelStrs(double a[5][5], int StrA, int StrB)
//{
//    for (int i = StrA; i <= StrB; i++)
//        DelStr(a, i);
//}

int main()
{
    double a[5][5];
    int StrNum;
    cout << "Enter numbers: " << endl;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    cout << "Enter delete string number: ";
    cin >> StrNum;
    DelStr(a, StrNum);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    system("Pause");
}