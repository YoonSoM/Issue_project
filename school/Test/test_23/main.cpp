#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++) {
		for (int j = 9; j > i; j--)
			cout << " ";
		for (int j = 0; j < 2 * i + 1; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
