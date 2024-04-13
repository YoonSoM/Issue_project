#include <iostream>
using namespace std;
int main() {
	int a[2][3] = { 1,2,3,4,5,6 };
	cout << "배열 a 시작 메모리 주소 : " << a << endl;
	cout << "a[0][0]의 주소 : " << &a[0][0] << endl;
	cout << "a[0] 의 주소 : " << a[0] << endl;
	cout << "a[1][0]의 주소 : " << &a[1][0] << endl;
	cout << "a[1]의 주소 : " << a[1] << endl;
	cout << "배열 a의 크기 : " << sizeof(a) << endl;
	cout << "배열a[0]의 크기 : " << sizeof(a[0]) << endl;
	cout << "배열a[1]의 크기 : " << sizeof(a[1]) << endl;
	cout << "___________________________" << endl;
	cout << "배열 a 시작 메모리 주소 : " << a << endl;
	cout << "a + 1의 주소 : " << a + 1 << endl;
	cout << "a + 2의 주소 : " << a + 2 << endl;
	cout << "a[0] + 1의 주소 : " << a[0] + 1 << endl;
	cout << "a[1]+1의 주소 : " << a[1] + 1 << endl;
	return 0;
}
