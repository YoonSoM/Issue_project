#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int d1, d2, d3;
	int flag = 0;
	int num = 0;
	srand((unsigned int)time(NULL));
	do {
		num++;
		d1 = rand() % 6 + 1; // 1-6
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		if (d1 == d2 && d2 == d3)
			flag = 1;
	} while (flag == 0);
	cout << "�ֻ����� �� " << num << "�� �������ϴ�" << endl;
	cout << "�� ���� �ֻ����� ���� " << d1 << "�� ����Ű�� �ֽ��ϴ�" << endl;
	return 0;
}