#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cout << "�������. ���ִ� �������Դϴ�" << endl;
		cout << "***** �޴� *****" << endl;
		cout << " 1. ������" << endl;
		cout << " 2. ����" << endl;
		cout << " 3. ġŲ " << endl;
		cout << " 4. �Ľ�Ÿ" << endl;
		cout << "****************" << endl;
		cout << "�԰� ���� ������ ��ȣ�� �������ּ���" << endl;
		cin >> n;
	} while (n < 1 || n>4);
	//(!(n >= 1 && n <= 4));
	if (n == 1)
		cout << "�����̸� �ֹ��ϼ̽��ϴ�" << endl;
	else if (n == 2)
		cout << "���ڸ� �ֹ��ϼ̽��ϴ�" << endl;
	else if (n == 3)
		cout << "ġŲ�� �ֹ��ϼ̽��ϴ�" << endl;
	else
		cout << "�Ľ�Ÿ�� �ֹ��ϼ̽��ϴ�" << endl;
	return 0;
}
