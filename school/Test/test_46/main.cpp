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
	cout << "�մ��� �ֹ���ȣ�� " << number << "�Դϴ�" << endl;
	number++;
}
