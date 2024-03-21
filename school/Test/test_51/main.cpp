#include <iostream>
using namespace std;
int main() {
	int a[5];
	cout << "배열 5칸에 들어갈 수를 차례대로 입력하세요";
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	cout << "a[0]은 " << a[0] << "입니다" << endl;
	cout << "a[1]은 " << a[1] << "입니다" << endl;
	cout << "a[2]은 " << a[2] << "입니다" << endl;
	cout << "a[3]은 " << a[3] << "입니다" << endl;
	cout << "a[4]은 " << a[4] << "입니다" << endl;
	return 0;
}