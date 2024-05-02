#include <iostream>
using namespace std;
int main() {
	int* a = new int;
	*a = 200;
	cout << "할당받은 메모리 주소 : " << a << endl;
	cout << "할당받은 메모리 공간에 저장된 값 : " << *a << endl;
	delete a;
	return 0;
}
