#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int n;
	cout << "5���� ū ���ڸ� �Է����ּ���";
	cin >> n;
	if (n <= 5) {
		cout << "����� �� ����";
		return 0;
	}
	for (int i = 5; i <= n; i++)
		sum += i;
	cout << "����� " << sum << "�Դϴ�" << endl;
	return 0;
}