#include<iostream>
using namespace std;
const float PI = 3.1415926;//����Բ����
int main()
{
	float r, h;//r��ʾ�뾶��h��ʾ׶��
	cin >> r >> h;//����뾶��׶��
	float V = 1.0 / 3.0 * PI * r * r * h;//Բ׶���V
	cout << V << endl;
	return 0;

}