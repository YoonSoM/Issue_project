#include <iostream>
using namespace std;
int main() {
	int age, height;
	cout << "���̵��꿡 ���Ű��� ȯ���մϴ�\n���̸� �Է����ּ���";
	cin >> age;
	cout << "Ű�� �Է����ּ��� (cm)";
	cin >> height;
	/*
	if (age >= 7 && height >= 120)
	cout << "���̱ⱸ ž�� ����";
	else
	cout << "���̱ⱸ ž�� �Ұ���";
	*/
	if (age >= 7) {
		if (height >= 120)
			cout << "���̱ⱸ ž�� ����";
		else
			cout << "���̱ⱸ ž�� �Ұ���";
	}
	else
		cout << "���̱ⱸ ž�� �Ұ���";
	return 0;
}