#include <iostream>
using namespace std;
struct car {
	int number;
	double gas;
}a = { 1234, 32.4 };
int main()
{
	struct car b;
	b = a;
	cout << "b������ ��ȣ�� " << b.number << "�̰� ������ ���� " << b.gas << "�Դϴ�." <<
		endl;
	return 0;
}
