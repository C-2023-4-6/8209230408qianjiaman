#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char F;
	cin >> a >> F>>b;
	switch (F) {
	case '+':
		cout << a << F << b <<"=" << (a + b) << endl;;
		break;
	case '-':
		cout << a << F << b << "=" << (a - b) << endl;;
		break;
	case '*':
		cout << a << F << b << "=" << (a * b) << endl;;
		break;
	case '/':
		if (b == 0)
			cout << "ÎÞÒâÒå" << endl;
		else
			cout << a << F << b << "=" << (a / b) << endl;;
		break;
	case '%':
		cout << a << F << b << "=" << (a % b) << endl;;
		break;
	default:
		cout << "´íÎó" << endl;

	}
	return 0;
}