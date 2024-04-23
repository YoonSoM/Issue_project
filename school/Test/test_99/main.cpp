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
Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "자동차가 만들어졌습니다" << endl;
}
Car::Car(int n, float g) {
	num = n;
	gas = g;
	cout << "차량 번호가 " << n << "이고 연료량이 " << g << "인 자동차가 만들어졌습니다" << endl;
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
void buyCar(Car c);
int main()
{
	Car car1;
	car1.show();
	cout << endl;
	Car car2(1234, 20.5);
	car2.show();
	return 0;
}
void buyCar(Car c) {
	int n = c.getNum();
	float g = c.getGas();
	cout << "차량 번호가 " << n << "이며, 연료량이 " << g << "인 자동차 구매완료" << endl;
}