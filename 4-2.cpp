//2����������
//�������������㷨��дһ�������������������㷨�������˶�������д���ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳�򡣴˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ���
//�㷨���������£�
//bool changed = true;
//do
//{
//	changed = false;
//	for (int j = 0; j < listSize �C 1; j++)
//		if (list[j] > list[j + 1])
//		{
//			swap list[j] with list[j + 1];
//			changed = true;
//		}
//} while (changed);
//�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
//��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�
#include<iostream>
using namespace std;
void bubble(double arr[10]) {
	double t;
	bool changed = true;
	const int size = 10;
	do
	{
		changed = false;
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				changed = true;
			}
		}
	} while (changed);
}
int main() {
	double arr[10];
	cout << "������10����" << endl;
	for (int i = 0; i < 10; i++)
		cin >> arr[i];
	bubble(arr);
	cout << "��������Ϊ��" << endl;
	for (int i = 0; i <= 10; i++)
		cout << arr[i] << "\t";
	return 0;
}