#include <iostream>
using namespace std;
int main() {
	int* a;
	a = (int*)malloc(5);
	*a = 100;
	cout << "할당받은 메모리 주소 : " << a << endl;
	cout << "할당받은 메모리 공간에 저장된 값 : " << *a << endl;
	free(a);
	return 0;
}