#include<iostream>
#include<string>
using namespace std;
#include"student.h"
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value()
{
	int n = 007;
	num = n;
	strcpy_s(name, "tcg");
	char s = 'm';
	sex = s;
}