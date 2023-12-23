#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void setTime(int h = 0,int m=0,int s=0)
	{
		cout << "设置时间：";
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void showTime()
	{
		cout << "现在的时间为：" << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time time;
	time.setTime();
	time.showTime();
	return 0;
}