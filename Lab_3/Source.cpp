#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double x);
double S(double x, double e);

int main()
{
    double xn, xk, dx;
    double x, y, s;
    double e;
    cout << "xn = "; cin >> xn;
    cout << "xk = "; cin >> xk;
    cout << "e  = "; cin >> e;
    dx = (xk - xn) / 10;
    cout << "|  x  |  Sum  | f(x)  |\n";
    for (x = xn; x <= xk; x += dx)
    {
        y = f(x);
        s = S(x, e);
        cout << setw(5) << setprecision(4) << x << " | "
            << setw(5) << setprecision(4) << s << " | "
            << setw(5) << setprecision(4) << y << " | "
            << endl;
    }
    return 0;
}

double f(double x)
{
    return pow(3.0, x);
}

double S(double x, double e)
{
    double sum = 1;
    double an = x * log(3) / 1;
    for (double n = 1; e < fabs(an); n = n + 1)
    {
        sum += an;
        an *= x * log(3) / (n + 1);
    }
    return sum;
}