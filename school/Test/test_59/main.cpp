#include <iostream>
using namespace std;
int main() {
	int score[] = { 100,90,80,70,60 };
	int sum = 0;
	int avg = 0;
	cout << "�迭��üũ�� : " << sizeof(score) << endl;
	cout << "�迭���1��ũ�� : " << sizeof(score[0]) << endl;
	cout << "�迭���1��ũ�� : " << sizeof(score[1]) << endl;
	int count = sizeof(score) / sizeof(score[0]);
	cout << "�� �迭�� " << count << "ĭ �Դϴ�" << endl;
	for (int i = 0; i < count; i++)
		sum += score[i];
	avg = sum / 5.0;
	cout << "����� " << avg << "�Դϴ�" << endl;
	return 0;
}