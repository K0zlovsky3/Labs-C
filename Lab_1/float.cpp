#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "Найти значение выражения - (a + b)^2 - (a^2 + 2ab)" << endl;
	cout << "			   ______________________" << endl;
	cout << "				    b^2			" << endl;
	cout << endl;
	cout << "Преобразуем по формуле квадрата суммы (a + b)^2, получаем - a^2 + 2ab + b^2" << endl;
	cout << endl;
	cout << "Переносим минус в левую часть выражения, в числителе получаем - -а^2 + 2ab + b^2 + a^2 + 2ab" << endl;
	cout << "Сокращаем подобные, в числителе получаем b^2" << endl;
	cout << endl;
	cout << "Подставляем переменные в выражение - b^2" << endl;
	cout << "				     ___" << endl;
	cout << "				     b^2" << endl;
	cout << endl;
	cout << "Введите переменные a и b" << endl;
	cin >> a;
	cout << "а = " << a << endl;
	cin >> b;
	cout << "b = " << b << endl;
	cout << endl;
	cout << "Ответ: " << pow(b, 2) / pow(b, 2) << endl;
	//c = pow(b, 2); // Знаменатель
	//d = -(pow(a, 2) + 2 * a*b); 
	//e = pow(a + b, 2); // Квадрат суммы
	//f = pow(e, 2); // Квадрат суммы
	//g = pow(a, 2) + 2 * a*b + pow(b, 2); // Квадрат суммы
	//h = e = g;
	return 0;
}