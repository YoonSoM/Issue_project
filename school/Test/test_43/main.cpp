#include <iostream>
using namespace std;
void fun2(int x) {
	cout << "현재 값은 " << x << "입니다" << endl;
	x = x / 2;
	cout << "2로 나눈 값은 " << x << "입니다" << endl;
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




