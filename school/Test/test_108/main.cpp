#include <iostream>
using namespace std;
int _sum(int a, int b);
int _mul(int a, int b);
int _max(int a, int b);
void _select(int (*fp)(int, int));
int main() {
	int sel;
	cout << "1: �� / 2: �� / 3:��(ū�����ϱ�)" << endl;
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
	cout << "�� ������ �Է��ϼ���";
	cin >> a >> b;
	result = fp(a, b);
	cout << "��� : " << result;
}
