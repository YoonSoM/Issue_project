#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int* b = &a;
	int** c = &b;
	cout << "a�� �� : " << a << endl;
	cout << "a�� �ּҰ� : " << &a << endl;
	cout << "b�� �� : " << b << endl;
	cout << "b�� �ּҰ� : " << &b << endl;
	cout << "c�� �� : " << c << endl;
	cout << "c�� �ּҰ� : " << &c << endl;
	cout << "b�� �������� : " << *b << endl;
	cout << "c�� �������� : " << *c << endl;
	cout << "c�� �������� �������� : " << **c << endl;
	return 0;
}
