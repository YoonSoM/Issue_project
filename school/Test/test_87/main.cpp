#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int* b = &a;
	int** c = &b;
	cout << "a의 값 : " << a << endl;
	cout << "a의 주소값 : " << &a << endl;
	cout << "b의 값 : " << b << endl;
	cout << "b의 주소값 : " << &b << endl;
	cout << "c의 값 : " << c << endl;
	cout << "c의 주소값 : " << &c << endl;
	cout << "b의 역참조값 : " << *b << endl;
	cout << "c의 역참조값 : " << *c << endl;
	cout << "c의 역참조의 역참조값 : " << **c << endl;
	return 0;
}
