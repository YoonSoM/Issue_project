#include <iostream>
using namespace std;
int main() {
	int n;
	int i = 5;
	int sum = 0;
	cout << "���ڸ� �Է��ϼ���";
	cin >> n;
	while (i <= n) {
		sum = sum + i;
		i++;
	}
	cout << "5���� " << n << "������ ���� " << endl;
	i = 5;
	while (i < n) {
		cout << i << " + ";
		i++;
	}
	cout << n << " = " << sum << endl;
	return 0;
}
