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
		cout << "请输入长方柱的长，宽，高：" << endl;
		cin >> l >> w >> h;
		length = l;
		width = w;
		height = h;
    }
	void V()
	{
		float V = length * width * height;
		cout << "该长方体的体积为：" << V << endl;
	}
};
int main()
{
	cube cube;
	cube.set();
	cube.V();
}