#include <iostream>
using namespace std;
int main() {
	int h[3];
	int sum = 0;
	float avg = 0;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "��° �л��� Ű�� �Է��ϼ���";
		cin >> h[i];
		sum += h[i];
	}
	avg = sum / 3.0;
	cout << "3�� �л��� ����� " << avg << "�Դϴ�" << endl;
	return 0;
}