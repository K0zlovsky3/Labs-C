#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int sum = 0;
	int square = 0;
	const int n = 3;
	int a[n][n];

	//Ввод элементов
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "Пожалуйста введите элементы матрицы a[" << i << "][" << j << "] ";
			cin >> a[i - 1][j - 1];
			cout << endl;
		}
	}

	//Вывод элементов
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	//Скалярное прозиведние строк
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++) {
				if (k != i) {
					sum += a[i][j] * a[k][j];
				}
				else {
					continue;
				}
			}
		}
	}

	//Скалярное произведение строки
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			square += a[i][j] * a[i][j];
		}
	}

	//Вывод
	if (sum > 0 || square != 3) {
		cout << "Матрица не ортонормированная!" << endl;
	}
	else {
		cout << "Матрица ортонормированная!" << endl;
	}

}