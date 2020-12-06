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

	//���� ���������
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "���������� ������� �������� ������� a[" << i << "][" << j << "] ";
			cin >> a[i - 1][j - 1];
			cout << endl;
		}
	}

	//����� ���������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	//��������� ����������� �����
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

	//��������� ������������ ������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			square += a[i][j] * a[i][j];
		}
	}

	//�����
	if (sum > 0 || square != 3) {
		cout << "������� �� �����������������!" << endl;
	}
	else {
		cout << "������� �����������������!" << endl;
	}

}