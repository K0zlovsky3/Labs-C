#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
	double n, m;
	cout << "Enter variables n and m" << endl;
	cin >> n;
	cout << "n = " << n << endl;
	cin >> m;
	cout << "m = " << m << endl;
	cout << "meaning of expression n+++m = " << n + ++m << endl;
	cout << "meaning of expression n-->m = " << (m-- >n) << endl;
	cout << "meaning of expression n-->m = " << (n-- >m) << endl;
	return 0;
}
