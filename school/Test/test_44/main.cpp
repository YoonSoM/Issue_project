#include <iostream>
using namespace std;
//���ϱ� 2 �Լ� , �Է� : ����, ���:���ϱ� 2�� �� ���
float plus2(float x);
int main() {
	float a = 10;
	float b = plus2(a);
	cout << "����� " << b << "�Դϴ�" << endl;
	return 0;
}
float plus2(float x) {
	float result = x + 2;
	return result;
}
