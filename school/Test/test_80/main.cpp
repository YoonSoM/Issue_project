#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int* b = &a;
	cout << "a�� �ּҰ��� " << &a << endl;
	cout << "a�� �ּҰ��� " << b << endl;
	cout << "a�� ���� " << a << endl;
	cout << "a�� ���� " << *b << endl;
	return 0;
}