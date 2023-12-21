#include <iostream>
using namespace std;
int main() {
	int a, b;
	int result;
	cout << "두 개의 서로 다른 정수를 입력하세요" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	result = a > b ? a : b;
	cout << "입력된 두 수 중 큰 값은 " << result << "입니다.";
	return 0;
}