#include <iostream>
using namespace std;
void getMinScore(int arr[]);
int main() {
	int score[10];
	cout << "10�� ������ ������ �Է����ּ���" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << "��° ������ �Է����ּ��� : ";
		cin >> score[i];
	}
	getMinScore(score);
	return 0;
}
void getMinScore(int arr[]) {
	int min = arr[0];
	int index = 0;
	for (int i = 0; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
			index = i;
		}
	}
	cout << "�Է��Ͻ� ���� �� �������� " << index + 1 << "��° ������ " << min << "���Դϴ�";
}
