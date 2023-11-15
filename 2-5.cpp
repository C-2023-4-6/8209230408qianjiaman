#include<iostream>
using namespace std;
int main()
{
	char m;
	int a = 0, b = 0, c = 0, d = 0;
	while (cin.get(m)) {
		int n = m;
		if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122)) a++;
		else if (n == 32) b++;
		else if (n >= 48 && n <= 57) c++;
		else if (n == 10) break;
		else d++;
	}
	cout << "英文字母个数为:" << a<<endl;
	cout << "空格个数为:" << b<<endl;
	cout << "数字个数为:" << c<<endl;
	cout << "其它字符个数为:" << d<<endl;
	return 0;
}