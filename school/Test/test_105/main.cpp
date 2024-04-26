#include <iostream>
using namespace std;
class Car {
protected:
	int num;
	float gas;
public:
	Car();
	virtual void show();
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
	int getCourse() { return course; }
	void setCourse(int c);
	void show();
};
Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "�ڵ����� ����������ϴ�. " << endl;
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
void RacingCar::setCourse(int c) {
	course = c;
	cout << "�ڽ���ȣ�� " << c << "�� ���߽��ϴ�" << endl;
}
void RacingCar::show() {
	cout << "���̽� ī ���� ��ȣ�� " << num << "�Դϴ�" << endl;
	cout << "���̽� ī ���� ������ ���� " << gas << "�Դϴ�" << endl;
	cout << "���̽� ī �ڽ��� " << course << "�Դϴ�" << endl;
}
int main()
{
	Car* pCars[2];
	Car car1;
	RacingCar rcar1;
	pCars[0] = &car1;
	pCars[0]->setNum(1234);
	pCars[0]->setGas(20.5);
	pCars[1] = &rcar1;
	pCars[1]->setNum(2345);
	pCars[1]->setGas(20.8);
	//pCars[1]->setC
	pCars[0]->show();
	pCars[1]->show();
	return 0;
}
