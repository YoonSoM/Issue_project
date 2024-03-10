#include <iostream>
using namespace std;
int main() {
	int n;
	int i = 1;
	cout << "구구단을 출력하겠습니다" << endl;
	cout << "몇 단을 출력할까요?" << endl;
	cin >> n;
	while (i <= 9) {
		// n * i = 결과
		cout << n << " * " << i << " = " << n * i << endl;
		i++;
	}
	return 0;
}