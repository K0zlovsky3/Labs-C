#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double n, m;
	cout << "Введите переменные n и m" << endl;
	cin >> n;
	cout << "n = " << n << endl;
	cin >> m;
	cout << "m = " << m << endl;
	cout << "Значение выражения n+++m = " << n + ++m << endl;
	cout << "Значение выражения n-->m = " << (m-- >n) << endl;
	cout << "Значение выражения n-->m = " << (n-- >m) << endl;
	return 0;
}