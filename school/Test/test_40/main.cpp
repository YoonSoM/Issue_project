#include <iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	do {
		cout << "숫자를 입력해주세요";
		cin >> n;
		if (n == 0)
			break;
		sum += n;
	} while (1);
	cout << "입력받은 숫자들의 총 합은 " << sum << "입니다" << endl;
	return 0;
}
