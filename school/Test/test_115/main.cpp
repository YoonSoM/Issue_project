#include <iostream>
using namespace std;
struct car {
	int number;
	double gas;
}a = { 1234, 32.4 };
int main()
{
	struct car b;
	b = a;
	cout << "b차량의 번호는 " << b.number << "이고 연료의 양은 " << b.gas << "입니다." <<
		endl;
	return 0;
}
