#include <iostream>
using namespace std;
int main() {
	int ary[5] = { 1,2,3,4,5 };
	int* b = ary;
	//b = &ary[0];
	cout << "������ b�� ����Ű�� �ִ� ���� " << *b << "�Դϴ�" << endl;
	b = b + 1;
	cout << "������ b�� ����Ű�� �ִ� ���� " << *b << "�Դϴ�" << endl;
	b = b + 1;
	cout << "������ b�� ����Ű�� �ִ� ���� " << *b << "�Դϴ�" << endl;
	b = b + 2;
	cout << "������ b�� ����Ű�� �ִ� ���� " << *b << "�Դϴ�" << endl;
	return 0;
}
