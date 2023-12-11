#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
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
	const int size = 999;
	char s1[size], s2[size];
	cout << "Enter the first string : ";
	cin.getline(s1, size);
	cout << "Enter the second string: ";
	cin.getline(s2, size);
	cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << indexof(s1, s2) << endl;
	return 0;
}
