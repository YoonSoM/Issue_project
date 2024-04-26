#include <iostream>
using namespace std;
class Car {
protected:
	int num;
	float gas;
public:
	Car();
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
	int getCourse() { return course; }
	void setCourse(int c);
	void newShow();
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
void RacingCar::newShow() {
	cout << "레이싱 카 차량 번호는 " << num << "입니다" << endl;
	cout << "레이싱 카 남은 연료의 양은 " << gas << "입니다" << endl;
	cout << "레이싱 카 코스번호는 " << course << "입니다" << endl;
}
int main()
{
	RacingCar rcar1;
	rcar1.setNum(1234);
	rcar1.setGas(20.5);
	rcar1.setCourse(3);
	rcar1.newShow();
	return 0;
}
