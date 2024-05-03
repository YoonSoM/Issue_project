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
	cout << "a 학생의 나이는 " << a.age << "살 입니다." << endl;
	cout << "a 학생의 키는 " << a.height << "cm 입니다." << endl;
	cout << "b 학생의 나이는 " << b.age << "살 입니다." << endl;
	cout << "b 학생의 키는 " << b.height << "cm 입니다." << endl;
	return 0;
}
