//2.   编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
//bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
//利用函数is_prime找出前200个素数，并按每行10个输出：
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