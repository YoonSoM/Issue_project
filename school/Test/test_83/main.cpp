#include <iostream>
using namespace std;
void swap(int* x, int* y);
int main() {
	//swap
	int a = 10;
	int b = 5;
	cout << "a�� ���� " << a << "�Դϴ�" << endl;
	cout << "b�� ���� " << b << "�Դϴ�" << endl;
	swap(&a, &b);
	cout << "a�� ���� " << a << "�Դϴ�" << endl;
	cout << "b�� ���� " << b << "�Դϴ�" << endl;
	return 0;
}
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}
