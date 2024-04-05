#include <iostream>
using namespace std;
void swap(int* x, int* y);
int main() {
	//swap
	int a = 10;
	int b = 5;
	cout << "a의 값은 " << a << "입니다" << endl;
	cout << "b의 값은 " << b << "입니다" << endl;
	swap(&a, &b);
	cout << "a의 값은 " << a << "입니다" << endl;
	cout << "b의 값은 " << b << "입니다" << endl;
	return 0;
}
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}
