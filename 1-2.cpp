#include<iostream>
using namespace std;
const float PI = 3.1415926;//定义圆周率
int main()
{
	float r, h;//r表示半径，h表示锥高
	cin >> r >> h;//输入半径，锥高
	float V = 1.0 / 3.0 * PI * r * r * h;//圆锥体积V
	cout << V << endl;
	return 0;

}