#include <iostream>
using namespace std;
void getMaxScore(int arr[]);
int main() {
	int score[10];
	cout << "10�� ������ ������ �Է����ּ���" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << "��° ������ �Է����ּ��� : ";
		cin >> score[i];
	}
	getMaxScore(score);
	return 0;
}
void getMaxScore(int arr[]) {
	int max = arr[0];
	int index = 0;
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	cout << index + 1 << "��° ������ " << max << "���� �ְ����Դϴ�" << endl;
}
