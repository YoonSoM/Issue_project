#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 4; j > i; j--)
			cout << " ";
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 8; j >= 2 * i; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}
