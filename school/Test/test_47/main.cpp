#include <iostream>
using namespace std;
int multi(int x, int y);
int main() {
	int n1, n2;
	int re;
	while (1) {
		cout << "곱셈 프로그램입니다" << endl;
		cout << "프로그램을 멈추려면 숫자 0을 입력하세요" << endl;
		cout << "첫번째 수를 입력하세요";
		cin >> n1;
		if (n1 == 0)
			break;
		cout << "두번째 수를 입력하세요";
		cin >> n2;
		/*re = multi(n1, n2);
		cout << "결과는 " << re << "입니다" << endl;*/
		cout << "결과는 " << multi(n1, n2) << "입니다" << endl;
	}
	return 0;
}
int multi(int x, int y) {
	/*int result = x * y;
	return result;*/
	return x * y;
}
