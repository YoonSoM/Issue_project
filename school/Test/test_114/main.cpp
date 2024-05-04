#include <iostream>
using namespace std;
struct car {
	int number;
	double gas;
}a;
int main()
{
	//struct car a;
	a.number = 1234;
	a.gas = 32.4;
	cout << "차량 a의 번호는 " << a.number << "이고 남은 연료의 양은 " << a.gas << "입니다." << endl;
		return 0;
}
