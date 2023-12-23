#include<iostream>
using namespace std;
class student
{
public:
	student(int i, float s) :id(i), score(s) {};
	int id;
	float score;
};
void max(student *students,int num)
{
	int m = 0;
	for (int i = 0; i < num; i++)
	{
		if (students[i].score > students[m].score)
			m = i;
	}
	cout << "最高成绩者的学号为：" << students[m].id << endl;
}
int main()
{
	student students[5] = {
		student(1,99),student(2,56),student(3,78),student(4,90),student(5,87)
	};
	max(students, 5);
	return 0;
}