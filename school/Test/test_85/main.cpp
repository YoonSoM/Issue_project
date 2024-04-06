#include <iostream>
using namespace std;
int main() {
	int ary[5] = { 1,2,3,4,5 };
	int* b = ary;
	//b = &ary[0];
	cout << "포인터 b가 가리키고 있는 값은 " << *b << "입니다" << endl;
	b = b + 1;
	cout << "포인터 b가 가리키고 있는 값은 " << *b << "입니다" << endl;
	b = b + 1;
	cout << "포인터 b가 가리키고 있는 값은 " << *b << "입니다" << endl;
	b = b + 2;
	cout << "포인터 b가 가리키고 있는 값은 " << *b << "입니다" << endl;
	return 0;
}
