#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int s = 0;
	for (int n = 0; n < 200; n = n + 3)
		s +=n;
		cout << "����� ����� ������������� �����, ������� 3 � ������� 200 ����� = " << s << endl;
	return 0;
}