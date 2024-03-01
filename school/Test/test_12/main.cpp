#include <iostream>
using namespace std;
int main() {
	int n;
	float result;
	cout << "정수를 입력하세요";
	cin >> n;
	if (n >= 30) {
		result = n / 2.0;
		cout << "입력받은 " << n << "을 2로 나눈 결과는 " << result << "입니다." <<
			endl;
	}
	cout << "프로그램을 종료합니다" << endl;
	return 0;
}