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
		cout << "����ʱ�䣺";
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void showTime()
	{
		cout << "���ڵ�ʱ��Ϊ��" << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time time;
	time.setTime();
	time.showTime();
	return 0;
}