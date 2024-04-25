#include <iostream>
using namespace std;
class Car {
private:
	int num;
	float gas;
public:
	Car();
	Car(int n, float g);
	void show();
	void setGas(float g);
	void setNum(int n);
	int getNum() { return num; }
	float getGas() { return gas; }
};
class RacingCar : public Car {
private:
	int course;
public:
	RacingCar();
	RacingCar(int n, float g, int c);
	int getCourse() { return course; }
	void setCourse(int c);
};
Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "�ڵ����� ����������ϴ�. " << endl;
}
Car::Car(int n, float g) {
	num = n;
	gas = g;
	cout << "���� ��ȣ�� " << num << "�̰� ���ᷮ�� " << gas << "�� �ڵ����� ����������ϴ�" << endl;
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
RacingCar::RacingCar() {
	course = 0;
	cout << "���̽� ī�� ����������ϴ�" << endl;
}
RacingCar::RacingCar(int n, float g, int c) : Car(n, g) {
	course = c;
	cout << "�ڽ� ��ȣ�� " << c << "�� ���̽� ī�� ����������ϴ�" << endl;
}
void RacingCar::setCourse(int c) {
	course = c;
	cout << "�ڽ���ȣ�� " << c << "�� ���߽��ϴ�" << endl;
}
int main()
{
	RacingCar rcar1(1234, 20.5, 3);
	return 0;
}
