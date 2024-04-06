#include <iostream>
using namespace std;
int main() {
	int ary[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
		cout << "배열 ary[" << i << "]번째 주소는 " << &ary[i] << "입니다" << endl;
	cout << "배열의 이름 ary는 배열의 주소와 같습니다 : " << ary << endl;
	return 0;
}
