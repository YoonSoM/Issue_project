#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 1; i <= 2023; i++)
		sum += i;
	cout << "1부터 2023까지의 정수의 합은 " << sum << "입니다" << endl;
	return 0;
}