#include <iostream>
using namespace std;
int multi(int x, int y);
int main() {
	int n1, n2;
	int re;
	while (1) {
		cout << "���� ���α׷��Դϴ�" << endl;
		cout << "���α׷��� ���߷��� ���� 0�� �Է��ϼ���" << endl;
		cout << "ù��° ���� �Է��ϼ���";
		cin >> n1;
		if (n1 == 0)
			break;
		cout << "�ι�° ���� �Է��ϼ���";
		cin >> n2;
		/*re = multi(n1, n2);
		cout << "����� " << re << "�Դϴ�" << endl;*/
		cout << "����� " << multi(n1, n2) << "�Դϴ�" << endl;
	}
	return 0;
}
int multi(int x, int y) {
	/*int result = x * y;
	return result;*/
	return x * y;
}
