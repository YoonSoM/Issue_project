#include <iostream>
using namespace std;
int main() {
	int i = 1;
	int sum = 0;
	/*
	while (i <= 2023) {
	if (i % 2 == 1)//i�� Ȧ���� ��
	sum = sum + i;
	//sum += i;
	i++;
	}
	*/
	while (i <= 2023) {
		sum += i;
		i = i + 2;
	}
	cout << "1���� 2023������ Ȧ���� ������ ���� " << sum << "�Դϴ�" << endl;
	return 0;
}