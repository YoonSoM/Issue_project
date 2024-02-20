#include <iostream>
using namespace std;
int main() {
	float n;
	cout << "실수를 입력하세요";
	cin >> n;
	if (n < 0)
		n = n * (-1.0);
	//n *= (-1.0);
	cout << "결과는 " << n << "입니다." << endl;
	return 0;
}
