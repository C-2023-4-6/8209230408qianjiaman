#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int c = max(a, b);
	while ((c % a != 0) || (c % b != 0)) c++;
	cout << "��С������Ϊ��" <<c<< endl;
	int d = min(a, b);
	while ((a % d != 0 || b % d != 0)) d--;
	cout << "���Լ��Ϊ��" << d<<endl;
	return 0;
}