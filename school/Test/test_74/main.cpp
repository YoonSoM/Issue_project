#include <iostream>
using namespace std;
int main() {
	float stu_weight[5];
	float sum = 0, avg;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° �л��� �����Ը� �Է��ϼ��� : ";
		cin >> stu_weight[i];
	}
	cout << "�Է��Ͻ� ������ �Ʒ��� �����ϴ�." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° �л��� �����Դ� " << stu_weight[i] << "kg �Դϴ�"
			<< endl;
		//sum += stu_weight[i];
	}
	int i = 0;
	while (i < 5) {
		sum += stu_weight[i];
		i++;
	}
	/*
	for (int i = 0; i < 5; i++)
	sum += stu_weight[i];
	*/
	avg = sum / 5.0;
	cout << "5�� �л��� �������� ����� " << avg << "kg �Դϴ�" << endl;
	return 0;
}
