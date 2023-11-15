#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int c = max(a, b);
	while ((c % a != 0) || (c % b != 0)) c++;
	cout << "最小公倍数为：" <<c<< endl;
	int d = min(a, b);
	while ((a % d != 0 || b % d != 0)) d--;
	cout << "最大公约数为：" << d<<endl;
	return 0;
}