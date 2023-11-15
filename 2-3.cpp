#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	double C;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "这三边能构成三角形" << endl;
		C = a + b + c;
		cout << "该三角形的周长为" << endl;
		if(a==b||a==c||b==c)
			cout << "该三角形是等腰三角形" << endl;
		else
			cout << "该三角形不是等腰三角形" << endl;

	}
	else
		cout << "这三边不能构成三角形" << endl;
	return 0;
}