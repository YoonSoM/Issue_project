#include <iostream>
using namespace std;
class Car {
public:
	int num;
	float gas;
	void show();
};
void Car::show() {
	cout << "���� ��ȣ�� " << num << "�Դϴ�" << endl;
	cout << "���� ������ ���� " << gas << "�Դϴ�" << endl;
}
int main()
{
	return 0;
}
