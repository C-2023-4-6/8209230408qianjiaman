#include<iostream>
using namespace std;
class cube
{
private:
	float length;
	float width;
	float height;
public:
	void set()
	{
		float l, w, h;
		cout << "�����볤�����ĳ������ߣ�" << endl;
		cin >> l >> w >> h;
		length = l;
		width = w;
		height = h;
    }
	void V()
	{
		float V = length * width * height;
		cout << "�ó���������Ϊ��" << V << endl;
	}
};
int main()
{
	cube cube;
	cube.set();
	cube.V();
}