
#include <iostream> // Библиотека стандартного ввода вывода.

using namespace std; //использования пространство имен std

//Описываем комплексное число.
//Комплексное число состоит из мнимой и действительной частей
struct Complex
{
    float Real; //Действительная часть комплексного числа
    float Mnim; //Мнимая часть комплексного числа
};
// Функция сложения вещественных чисел
float Summ(float a, float b)
{
    float Summa = a + b;
    cout << "\n\nСумма вещественных чисел равна = " << Summa << endl;
    return Summa;
};

// Функция сложения комплексных чисел
Complex Summ(Complex a, Complex b)
{
    Complex Summa;
    Summa.Real = a.Real + b.Real;
    Summa.Mnim = a.Mnim + b.Mnim;
    cout << "\n\nСумма комплексных чисел равна = " << Summa.Real << "+i" << Summa.Mnim << endl;
    return Summa;
}

int main()
{
    //Русский язык в консоли (вывод)
    setlocale(LC_ALL, "RUS");

    //Ввод комплексного числа 1
    Complex CompChislo1;
    cout << "\nВведите действительную часть первого комплексного числа ";
    cin >> CompChislo1.Real;
    cout << "\nВведите мнимую часть первого комплексного числа ";
    cin >> CompChislo1.Mnim;

    //Ввод комплексного числа 2
    Complex CompChislo2;
    cout << "\nВведите действительную часть второго комплексного числа ";
    cin >> CompChislo2.Real;
    cout << "\nВведите мнимую часть второго комплексного числа ";
    cin >> CompChislo2.Mnim;

    //Ввод вещественных чисел

    float fChislo1;
    float fChislo2;

    cout << "\nВведите первое вещественное число ";
    cin >> fChislo1;

    cout << "\nВведите второе вещественное число ";
    cin >> fChislo2;

    //Выполнение перегрузки функций.

    Summ(fChislo1, fChislo2);
    Summ(CompChislo1, CompChislo2);
    system("Pause");
    return 0;

}
