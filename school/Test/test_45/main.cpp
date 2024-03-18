#include <iostream>
using namespace std;
void order();
int number = 1;
int main() {
	order();
	order();
	number = number + 1;
	order();
	return 0;
}
void order() {
	cout << "손님의 주문번호는 " << number << "입니다" << endl;
	number++;
}