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
	cout << "�մ��� �ֹ���ȣ�� " << number << "�Դϴ�" << endl;
	number++;
}