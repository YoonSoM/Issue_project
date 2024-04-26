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
	cout << "자동차가 만들어졌습니다. " << endl;
}
void Car::show() {
	cout << "차량 번호는 " << num << "입니다" << endl;
	cout << "남은 연료의 양은 " << gas << "입니다" << endl;
}
void Car::setGas(float g) {
	if (g >= 0 && g <= 1000) {
		gas = g;
		cout << "연료의 양을 " << gas << "으로 변경하였습니다" << endl;
	}
	else {
		cout << "연료의 양을 변경할 수 없습니다" << endl;
	}
}
void Car::setNum(int n) {
	num = n;
	cout << "차량번호를 " << n << "으로 변경하였습니다" << endl;
}
RacingCar::RacingCar() {
	course = 0;
	cout << "레이싱 카가 만들어졌습니다" << endl;
}
void RacingCar::setCourse(int c) {
	course = c;
	cout << "코스번호를 " << c << "로 정했습니다" << endl;
}
void RacingCar::show() {
	cout << "레이싱 카 차량 번호는 " << num << "입니다" << endl;
	cout << "레이싱 카 남은 연료의 양은 " << gas << "입니다" << endl;
	cout << "레이싱 카 코스는 " << course << "입니다" << endl;
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
