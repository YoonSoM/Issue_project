#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int n;
	cout << "5보다 큰 숫자를 입력해주세요";
	cin >> n;
	if (n <= 5) {
		cout << "계산할 수 없음";
		return 0;
	}
	for (int i = 5; i <= n; i++)
		sum += i;
	cout << "결과는 " << sum << "입니다" << endl;
	return 0;
}