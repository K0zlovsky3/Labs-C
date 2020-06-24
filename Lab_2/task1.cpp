#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int s = 0;
	for (int n = 0; n < 200; n = n + 3)
		s +=n;
		cout << "The sum of positive integers that are multiples of 3 and less than 200 is = " << s << endl;
	return 0;
}
