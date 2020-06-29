#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
#include <cstdio>
#pragma warning(disable : 4996)

using namespace std;

struct abiturient
{
    char fio[35];
    int b_year; //11;
    char ocenki[3];
    int sr_bal;
};

int main()
{
    abiturient st;
    FILE* f;
    setlocale(LC_ALL, "RUS");
    int n;
    f = fopen("f.txt", "wb");
    cout << "Введите данные абитуриента";
    fwrite(&n, sizeof(n), 1, f);

    cout << "\n Имя, Фамилия: "; cin >> st.fio;
    cout << endl;
    cout << "\n Год рождения: "; (cin >> st.b_year).get();   //28
    cout << endl;
    cout << "\n Оценка экзамена: "; cin >> st.ocenki;
    cout << endl;
    cout << "\n Средний бал: "; cin >> st.sr_bal;
    cout << endl;

    fwrite(&st, sizeof(st), 1, f);
    fclose(f);

    f = fopen("f.txt", "rb");

    fread(&n, sizeof(n), 1, f);   //40
    cout << "\n Имя, Фамилия: " << st.fio;
    cout << "\n Год рождения: " << st.b_year;
    cout << endl << "\n Оценка экзамена: " << st.ocenki;
    cout << "\n Средний бал: " << st.sr_bal << endl;
    fclose(f);

    _getch();
    return 0;

}