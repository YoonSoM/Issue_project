#include <iostream>
using namespace std;
struct myclass {
	int age;
	double height;
}b = { 10,145 };
int main()
{
	struct myclass a;
	a.age = 13;
	a.height = 155.2;
	// b.age = 10;
	// b.height = 145;
	cout << "a �л��� ���̴� " << a.age << "�� �Դϴ�." << endl;
	cout << "a �л��� Ű�� " << a.height << "cm �Դϴ�." << endl;
	cout << "b �л��� ���̴� " << b.age << "�� �Դϴ�." << endl;
	cout << "b �л��� Ű�� " << b.height << "cm �Դϴ�." << endl;
	return 0;
}
