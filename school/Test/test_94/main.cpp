#include <iostream>
using namespace std;
class Car {
public:
	int num;
	float gas;
	void show();
};
void Car::show() {
	cout << "차량 번호는 " << num << "입니다" << endl;
	cout << "남은 연료의 양은 " << gas << "입니다" << endl;
}
int main()
{
	Car car1;
	car1.num = 1234;
	car1.gas = 20.5;
	car1.show();
	return 0;
}
