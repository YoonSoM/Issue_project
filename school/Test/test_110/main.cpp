#include <iostream>
using namespace std;
int main() {
	int* a = new int;
	*a = 200;
	cout << "�Ҵ���� �޸� �ּ� : " << a << endl;
	cout << "�Ҵ���� �޸� ������ ����� �� : " << *a << endl;
	delete a;
	return 0;
}
