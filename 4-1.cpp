//1、打印不同的数：
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。
//下面是一个运行样例：
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