#include <iostream>
using namespace std;
int main() {
	int i = 5;
	/*
	while (i <= 100) {
	if (i % 5 == 0)
	cout << i << endl;
	i++;
	}*/
	while (i <= 100) {
		cout << i << endl;
		i = i + 5;
	}
	return 0;
}