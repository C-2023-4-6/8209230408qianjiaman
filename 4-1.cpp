//1����ӡ��ͬ������
//��дһ�����򣬶���10������������в�ͬ�����������һ�������ֶ�Σ�ֻ��ӡһ�Σ���
//��ʾ��������������һ���µ�ֵ���������һ�����顣���򣬽��䶪����������Ϻ������б���ľ��ǲ�ͬ������
//������һ������������
//Enter ten numbers : 1 2 3 2 1 6 3 4 5 2
//The distinct numbers are : 1 2 3 6 4 5
#include<iostream>
using namespace std;
int main() {
    int arr[10] = { };
    cout << "enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "the distinct numbers are: ";
    for (int i = 0; i < 10; i++) {
        int n = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] == arr[i]) {
                n++;
                break;
            }

        }
        if (n == 0)
            cout << arr[i] << " ";
    }

    return 0;
}