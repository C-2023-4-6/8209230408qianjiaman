/*3) �������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ۲�ָ�뼰ָ��ָ������ݣ����һ��������������С������������������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete����
*/
#include<iostream>
using namespace std;
void arrange(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (*(arr + j) > *(arr + j + 1))
			{
				int t = *(arr + j + 1);
				*(arr + j + 1) = *(arr + j);
				*(arr + j) = t;
			}
		}
	}
}
int main() {
	cout << "����������" << endl;
	int size;
	cin >> size;
	int* arr = new int[size];
	cout << "������һ����" << endl;
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	cout << "arr[1] = " << arr[1] << endl;
	cout << "arr[1] = " << *(arr + 1) << endl;
	arrange(arr, size);
	for (int i = 0; i < size; i++)
		cout << *(arr + i) << '\t';
	delete[] arr;
	system("pause");
	return 0;
}
