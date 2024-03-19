#include <iostream>
using namespace std;
void order();
int main() {
	order();
	order();
	order();
	return 0;
}
void order() {
	static int number = 1;
	cout << "손님의 주문번호는 " << number << "입니다" << endl;
	number++;
}
