#include <iostream>
using namespace std;
int main() {
	char s1[7] = { 'H','e','l','l','o','!','\0' };
	for (int i = 0; i < 7; i++)
		cout << s1[i];
	s1[4] = 'w';
	for (int i = 0; i < 7; i++)
		cout << s1[i];
	return 0;
}