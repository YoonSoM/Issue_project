#include <iostream>
using namespace std;
struct car {
	int number;
	double gas;
}a;
int main()
{
	//struct car a;
	a.number = 1234;
	a.gas = 32.4;
	cout << "���� a�� ��ȣ�� " << a.number << "�̰� ���� ������ ���� " << a.gas << "�Դϴ�." << endl;
		return 0;
}
