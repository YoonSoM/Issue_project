#include <iostream>
using namespace std;
int main() {
	int a[2][3] = { 1,2,3,4,5,6 };
	cout << "�迭 a ���� �޸� �ּ� : " << a << endl;
	cout << "a[0][0]�� �ּ� : " << &a[0][0] << endl;
	cout << "a[0] �� �ּ� : " << a[0] << endl;
	cout << "a[1][0]�� �ּ� : " << &a[1][0] << endl;
	cout << "a[1]�� �ּ� : " << a[1] << endl;
	cout << "�迭 a�� ũ�� : " << sizeof(a) << endl;
	cout << "�迭a[0]�� ũ�� : " << sizeof(a[0]) << endl;
	cout << "�迭a[1]�� ũ�� : " << sizeof(a[1]) << endl;
	cout << "___________________________" << endl;
	cout << "�迭 a ���� �޸� �ּ� : " << a << endl;
	cout << "a + 1�� �ּ� : " << a + 1 << endl;
	cout << "a + 2�� �ּ� : " << a + 2 << endl;
	cout << "a[0] + 1�� �ּ� : " << a[0] + 1 << endl;
	cout << "a[1]+1�� �ּ� : " << a[1] + 1 << endl;
	return 0;
}
