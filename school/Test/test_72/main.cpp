#include <iostream>
using namespace std;
int main() {
	char s1[] = "Hello! Yooji Hi! Minho";
	for (int i = 0; i < 30; i++) {
		if (s1[i] == '\0')
			break;
		cout << s1[i];
	}
	return 0;
}