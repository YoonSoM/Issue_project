#include <iostream>
using namespace std;
int main() {
	int age[3][5];
	age[0][0] = 1;
	age[0][1] = 2;
	cin >> age[0][2];
	cout << age[0][0] << age[0][1] << age[0][2];
	return 0;
}
