#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "구구단 출력 프로그램입니다" << endl;
	cout << "몇 단을 제외하고 출력할까요?" << endl;
	cin >> n;
	/*
	for (int i = 2; i < 10; i++) {
	if (i == n)
	continue;
	for (int j = 1; j <= 9; j++)
	cout << i << " * " << j << " = " << i * j << endl;
	}*/
	int j = 1;
	for (int i = 2; i < 10; i++) {
		if (i == n)
			continue;
		j = 1;
		while (j <= 9) {
			cout << i << " * " << j << " = " << i * j << endl;
			j++;
		}
	}
	return 0;
}