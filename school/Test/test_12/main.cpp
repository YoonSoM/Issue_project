#include <iostream>
using namespace std;
int main() {
	int n;
	float result;
	cout << "������ �Է��ϼ���";
	cin >> n;
	if (n >= 30) {
		result = n / 2.0;
		cout << "�Է¹��� " << n << "�� 2�� ���� ����� " << result << "�Դϴ�." <<
			endl;
	}
	cout << "���α׷��� �����մϴ�" << endl;
	return 0;
}