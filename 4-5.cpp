#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int a = strlen(s1), b = strlen(s2), index;
	bool* s3 = new bool[a];
	for (int i = 0; i < a; i++)
		s3[i] = false;
	for (int i = 0; i < b - a + 1; i++) {
		for (int j = 0, k = i; j < a && k < b; j++, k++) {
			if (s1[j] == s2[k])
			{
				index = i;
				s3[j] = true;
			}
		}
		for (int n = 0, m = 0; n < a; n++) {
			if (s3[n] == 0 && i == b - a)
			{
				return -1;
				break;
			}
			if (s3[n] == 1)
				m++;
			if (m == a)
				return index;
		}
	}
}
int main() {
	char s1[20], s2[20];
	cout << "Enter the first string : ";
	cin.getline(s1, 20);
	cout << "Enter the second string: ";
	cin.getline(s2, 20);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexOf(s1, s2) << endl;
	return 0;
}
