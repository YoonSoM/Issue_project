#include <iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	do {
		cout << "���ڸ� �Է����ּ���";
		cin >> n;
		if (n == 0)
			break;
		sum += n;
	} while (1);
	cout << "�Է¹��� ���ڵ��� �� ���� " << sum << "�Դϴ�" << endl;
	return 0;
}
