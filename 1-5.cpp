#include<iostream>
using namespace std;
int main()
{
	float C, F;//定义华氏温度F和摄氏温度C
	cin >> F;
	C = (F - 32) / 1.8;
	cout << C << endl;
	return 0;
}