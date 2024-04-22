#include <iostream>
using namespace std;
class Car {
private:
	int num;
	float gas;
public:
	void show();
	void setGas(float g);
	void setNum(int n);
	int getNum() { return num; }
	float getGas() { return gas; }
};
void Car::show() {
	cout << "���� ��ȣ�� " << num << "�Դϴ�" << endl;
	cout << "���� ������ ���� " << gas << "�Դϴ�" << endl;
}
void Car::setGas(float g) {
	if (g >= 0 && g <= 1000) {
		gas = g;
		cout << "������ ���� " << gas << "���� �����Ͽ����ϴ�" << endl;
	}
	else {
		cout << "������ ���� ������ �� �����ϴ�" << endl;
	}
}
void Car::setNum(int n) {
	num = n;
	cout << "������ȣ�� " << n << "���� �����Ͽ����ϴ�" << endl;
}
int main()
{
	Car car1;
	car1.setGas(500);
	car1.setNum(1234);
	//car1.show();
	cout << "���� ��ȣ : " << car1.getNum() << endl;
	cout << "������ �� : " << car1.getGas() << endl;
	return 0;
}
