//2.   ��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
//bool is_prime(int num), ���num��������������true�����򷵻�false��
//���ú���is_prime�ҳ�ǰ200������������ÿ��10�������
//2     3      5      7    11    13    17    19    23    29
#include<iostream>
using namespace std;
bool is_prime(int num) {
	int i = 1;
	int sum = 0;
	while (i < num) {
		if (num % i == 0)
			sum++; i++;
	}
	if (sum == 1)return true;
	else return false;
}
int main()
{
	int n = 1;
	int m = 0;
	int sum = 0;
	while(sum<200){
		if (is_prime(n) == 1) {
			sum++;
			cout << n << " ";
			m++;
		}
		while (m == 10) {
			cout << endl;
			m = 0;
	}
		n++;
}
	return 0;
}