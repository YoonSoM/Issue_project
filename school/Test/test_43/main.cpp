#include <iostream>
using namespace std;
void fun2(int x) {
	cout << "���� ���� " << x << "�Դϴ�" << endl;
	x = x / 2;
	cout << "2�� ���� ���� " << x << "�Դϴ�" << endl;
}
int main() {
	int a = 10;
	fun2(a);
	int b = 4;
	fun2(b);
	int c = 8;
	fun2(c);
	return 0;
}




