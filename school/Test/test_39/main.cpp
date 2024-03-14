#include <iostream>
using namespace std;
int main() {
	int n;
	int i = 5;
	int sum = 0;
	cout << "숫자를 입력하세요";
	cin >> n;
	while (i <= n) {
		sum = sum + i;
		i++;
	}
	cout << "5부터 " << n << "까지의 합은 " << endl;
	i = 5;
	while (i < n) {
		cout << i << " + ";
		i++;
	}
	cout << n << " = " << sum << endl;
	return 0;
}
