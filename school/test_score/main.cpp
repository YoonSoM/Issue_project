#include <iostream>
using namespace std;
int main() {
	int score[5];
	int sum = 0;
	float avg = 0;
	cout << "ù ��° �л��� ���������� �Է��ϼ���";
	cin >> score[0];
	cout << "�� ��° �л��� ���������� �Է��ϼ���";
	cin >> score[1];
	cout << "�� ��° �л��� ���������� �Է��ϼ���";
	cin >> score[2];
	cout << "�� ��° �л��� ���������� �Է��ϼ���";
	cin >> score[3];
	cout << "�ټ� ��° �л��� ���������� �Է��ϼ���";
	cin >> score[4];
	sum = score[0] + score[1] + score[2] + score[3] + score[4];
	avg = sum / 5.0;
	cout << "5�� �л��� ����� " << avg << "�Դϴ�" << endl;
	return 0;
}