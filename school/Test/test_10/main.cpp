#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "정수를 입력하세요";
	cin >> n;
	if (n % 2 == 1)
		cout << "입력하신 수는 홀수입니다" << endl;
	else
		cout << "입력하신 수는 짝수입니다" << endl;
	return 0;
}