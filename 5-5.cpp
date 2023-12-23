#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int xx,int yy):x(xx),y(yy){}
	void setPoint(int i,int j)
	{
		x = 60 + j;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p1(60, 80);
	p1.setPoint(10, 20);
	p1.display();
	return 0;
}