#include <iostream>
using namespace std;
int main() {
	int a = 10;
	int* b = &a;
	cout << "a의 주소값은 " << &a << endl;
	cout << "a의 주소값은 " << b << endl;
	return 0;
}