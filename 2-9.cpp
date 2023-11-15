#include<iostream>
using namespace std;
int main()
{
	float sum = 0;
	int n = 0;
	for (int a = 2; a <= 100; a *= 2) {
		sum = sum + a * 0.8;
		n++;
	}
	cout << sum / n << endl;
	return 0;
}