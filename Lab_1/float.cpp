#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "����� �������� ��������� - (a + b)^2 - (a^2 + 2ab)" << endl;
	cout << "			   ______________________" << endl;
	cout << "				    b^2			" << endl;
	cout << endl;
	cout << "����������� �� ������� �������� ����� (a + b)^2, �������� - a^2 + 2ab + b^2" << endl;
	cout << endl;
	cout << "��������� ����� � ����� ����� ���������, � ��������� �������� - -�^2 + 2ab + b^2 + a^2 + 2ab" << endl;
	cout << "��������� ��������, � ��������� �������� b^2" << endl;
	cout << endl;
	cout << "����������� ���������� � ��������� - b^2" << endl;
	cout << "				     ___" << endl;
	cout << "				     b^2" << endl;
	cout << endl;
	cout << "������� ���������� a � b" << endl;
	cin >> a;
	cout << "� = " << a << endl;
	cin >> b;
	cout << "b = " << b << endl;
	cout << endl;
	cout << "�����: " << pow(b, 2) / pow(b, 2) << endl;
	//c = pow(b, 2); // �����������
	//d = -(pow(a, 2) + 2 * a*b); 
	//e = pow(a + b, 2); // ������� �����
	//f = pow(e, 2); // ������� �����
	//g = pow(a, 2) + 2 * a*b + pow(b, 2); // ������� �����
	//h = e = g;
	return 0;
}