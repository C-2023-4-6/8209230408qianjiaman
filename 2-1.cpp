#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	int b = a;
	if (b >= 97&&b <= 122)
		cout << (char)toupper(a) << endl;
	else
		cout << b+1 << endl;
	return 0;
}