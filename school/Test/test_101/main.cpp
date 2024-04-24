#include <iostream>
using namespace std;
class Car {
private:
	int num;
	float gas;
public:
	static int count;
	Car();
	Car(int n, float g);
	void show();
	void setGas(float g);
	void setNum(int n);
	int getNum() { return num; }
	float getGas() { return gas; }
	static void showCount();
};
Car::Car() {
	num = 0;
	gas = 0.0;
	count++;
	cout << "�ڵ����� ����������ϴ�. �� " << count << "���� �ڵ����� �ֽ��ϴ�" << endl;
}
Car::Car(int n, float g) {
	num = n;
	gas = g;
	count++;
	cout << "���� ��ȣ�� " << n << "�̰� ���ᷮ�� " << g << "�� �ڵ����� ����������ϴ�" << endl;
		cout << "�� " << count << "���� �ڵ����� �ֽ��ϴ�" << endl;
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
void Car::showCount() {
	cout << "���� �ڵ����� " << count << "�� �����߽��ϴ�" << endl;
	//cout << num;
}
void buyCar(Car c);
int Car::count = 0;
int main()
{
	Car car1;
	car1.show();
	cout << endl;
	Car car2(1234, 20.5);
	car2.show();
	Car::showCount();
	return 0;
}
void buyCar(Car c) {
	int n = c.getNum();
	float g = c.getGas();
	cout << "���� ��ȣ�� " << n << "�̸�, ���ᷮ�� " << g << "�� �ڵ��� ���ſϷ�" <<
		endl;
}
