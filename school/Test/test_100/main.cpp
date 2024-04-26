#include <iostream>
using namespace std;
class Car {
private:
	int num;
	float gas;
public:
	//Car();
	Car(int n = 0, float g = 0.0);
	void show();
	void setGas(float g);
	void setNum(int n);
	int getNum() { return num; }
	float getGas() { return gas; }
};
/*
Car::Car() {
num = 0;
gas = 0.0;
cout << "�ڵ����� ����������ϴ�" << endl;
}*/
Car::Car(int n, float g) {
	num = n;
	gas = g;
	cout << "���� ��ȣ�� " << n << "�̰� ���ᷮ�� " << g << "�� �ڵ����� ����������ϴ�" << endl;
}
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
void buyCar(Car c);
int main()
{
	Car mycars[3];
	for (int i = 0; i < 3; i++)
		mycars[i].show();
	Car car1(1234, 22.5);
	car1.show();
	return 0;
}
void buyCar(Car c) {
	int n = c.getNum();
	float g = c.getGas();
	cout << "���� ��ȣ�� " << n << "�̸�, ���ᷮ�� " << g << "�� �ڵ��� ���ſϷ�" << endl;
}