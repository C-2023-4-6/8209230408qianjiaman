#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	double a;
	cin >> a;
	double X1 = a;
	double X2 = 1.0 / 2.0 * (X1 + a / X1);
	do {
		X1 = X2;
		X2 = 1.0 / 2.0 * (X1 + a / X1);
	} while (abs(X2 - X1) >= 1e-5);
	cout << X2 << endl;
	return 0;
}