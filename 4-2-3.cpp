/*3) 主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）。
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
	cout << "请输入字数" << endl;
	int size;
	cin >> size;
	int* arr = new int[size];
	cout << "请输入一行数" << endl;
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
