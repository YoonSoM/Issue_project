#include <iostream>
using namespace std;
int main() {
	int* a;
	a = (int*)malloc(5);
	*a = 100;
	cout << "�Ҵ���� �޸� �ּ� : " << a << endl;
	cout << "�Ҵ���� �޸� ������ ����� �� : " << *a << endl;
	free(a);
	return 0;
}