//1、输入自然数m和n，
//（1）求他们的最大公约数（或称最大公因数）。
//要求输入、输出在主函数中进行，求公约数由函数实现。
//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
#include<iostream>
#include<cmath>
using namespace std;
int dy(int a, int b) {
	int c = min(a,b);
	while (a % c != 0 || b % c != 0) {
		c--;
	}return c;
}
int xb(int a, int b) {
	int c = max(a, b);
	while (c % a != 0 || c % b != 0) {
		c++;
	}return c;
}
int main()
{
	int m, n;
	cout << "请输入自然数m" << endl;
	cin >> m;
	cout << "请输入自然数n" << endl;
	cin >> n;
	cout << "m,n的最大公约数为：" << dy(m, n) << endl;
	cout << "m,n的最小公倍数为：" << xb(m, n) << endl;
	return 0;
}