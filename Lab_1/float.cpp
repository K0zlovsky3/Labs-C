#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
int main() {
	float a, b;
	cout << "Find the value of an expression - (a + b)^2 - (a^2 + 2ab)" << endl;
	cout << "			   ______________________" << endl;
	cout << "				    b^2			" << endl;
	cout << endl;
	cout << "We transform by the formula of the square of the sum - (a + b)^2, we get - a^2 + 2ab + b^2" << endl;
	cout << endl;
	cout << "We transfer the minus to the left side of the expression, in the numerator we get - -à^2 + 2ab + b^2 + a^2 + 2ab" << endl;
	cout << "Reduce the like, in the numerator we get b^2" << endl;
	cout << endl;
	cout << "Substitute variables into the expression - b^2" << endl;
	cout << "				     ___" << endl;
	cout << "				     b^2" << endl;
	cout << endl;
	cout << "Enter variables a and b" << endl;
	cin >> a;
	cout << "a = " << a << endl;
	cin >> b;
	cout << "b = " << b << endl;
	cout << endl;
	cout << "Îòâåò: " << pow(b, 2) / pow(b, 2) << endl;
	//c = pow(b, 2); // Denominator
	//d = -(pow(a, 2) + 2 * a*b); 
	//e = pow(a + b, 2); // Squared amount
	//f = pow(e, 2); // Squared amount
	//g = pow(a, 2) + 2 * a*b + pow(b, 2); // Squared amount
	//h = e = g;
	return 0;
}
