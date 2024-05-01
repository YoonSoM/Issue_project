#include <iostream>
using namespace std;
int _sum(int a, int b);
int _mul(int a, int b);
int _max(int a, int b);
void _select(int (*fp)(int, int));
int main() {
	int sel;
	cout << "1: 합 / 2: 곱 / 3:비교(큰값구하기)" << endl;
	cin >> sel;
	if (sel == 1)
		_select(_sum);
	else if (sel == 2)
		_select(_mul);
	else if (sel == 3)
		_select(_max);
	return 0;
}
int _sum(int a, int b) {
	return (a + b);
}
int _mul(int a, int b) {
	return (a * b);
}
int _max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
void _select(int (*fp)(int, int)) {
	int a, b, result;
	cout << "두 정수를 입력하세요";
	cin >> a >> b;
	result = fp(a, b);
	cout << "결과 : " << result;
}
