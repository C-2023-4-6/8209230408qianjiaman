//1��������Ȼ��m��n��
//��1�������ǵ����Լ������������������
//Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
//��2���ں����������Լ������С������������ʾ��ʹ�����ò�����
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
	cout << "��������Ȼ��m" << endl;
	cin >> m;
	cout << "��������Ȼ��n" << endl;
	cin >> n;
	cout << "m,n�����Լ��Ϊ��" << dy(m, n) << endl;
	cout << "m,n����С������Ϊ��" << xb(m, n) << endl;
	return 0;
}