#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	int com, user;
	int cnt = 0;
	int result[3] = { 0, };
	srand((unsigned)time(NULL));
	while (1) {
		cout << "***********��������������*************" << endl;
		cout << "1:���� 2:���� 3:�� 0:����" << endl;
		cout << "�Է����ּ��� : ";
		cin >> user;
		if (user > 0 && user < 4) {
			com = rand() % 3 + 1;
			cout << "��ǻ�� : " << (com == 1 ? "����" : com == 2 ? "����" : "��") << endl;
				cout << "����� : " << (user == 1 ? "����" : user == 2 ? "����" : "��") << endl;
					cnt++;
			if (com == user) {
				cout << "�����ϴ�" << endl;
				result[1]++;
			}
			else if ((com == 1) && (user == 3) || (com == 2) && (user == 1)
				|| (com == 3) && (user == 2)) {
				cout << "�����ϴ�" << endl;
				result[2]++;
			}
			else {
				cout << "�̰���ϴ� " << endl;
				result[0]++;
			}
			cout << cnt << "�� " << result[0] << "�� " << result[1] << "�� " <<
				result[2] << "��" << endl;
		}
		else if (user == 0) {
			cout << "������ �����մϴ�" << endl;
			break;
		}
	}
	return 0;
}