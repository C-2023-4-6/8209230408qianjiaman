#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	double C;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�������ܹ���������" << endl;
		C = a + b + c;
		cout << "�������ε��ܳ�Ϊ" << endl;
		if(a==b||a==c||b==c)
			cout << "���������ǵ���������" << endl;
		else
			cout << "�������β��ǵ���������" << endl;

	}
	else
		cout << "�����߲��ܹ���������" << endl;
	return 0;
}