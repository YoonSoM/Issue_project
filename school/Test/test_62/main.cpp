#include <iostream>
using namespace std;
int main() {
	int age[3][5];
	age[0][0] = 1;
	age[0][1] = 2;
	age[0][2] = age[0][0] + age[0][1];
	age[0][3] = age[0][0] * age[0][1];
	age[0][4] = age[0][0] - age[0][1];
	age[1][0] = age[0][1] % 2;
	cout << age[0][0] << age[0][1] << age[0][2] << age[0][3]
		<< age[0][4] << age[1][0];
	return 0;
}