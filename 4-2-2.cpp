
#include<iostream>
using namespace std;
int parseHex(const char* const hexString);
int parseHex(const char* const hexString) {
	int sum = 0;
	int a = strlen(hexString);
	int* list = new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i] = (static_cast<int>(hexString[i]) - 'A' + 10) * (pow(16, a - 1 - i));
		else
			list[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		sum = sum + list[i];
	}
	delete[] list;
	return sum;
}
int main() {
	const int size = 999;
	char s[size];
	cout << "Please enter a number in hexChar:\n";
	cin.getline(s, size);
	cout << parseHex(s) << endl;
	return 0;
}
