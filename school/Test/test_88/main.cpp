#include <iostream>
using namespace std;
void swap_ptr(int** p1, int** p2);
int main() {
	int a = 3;
	int b = 5;
	int* ap = &a;
	int* bp = &b;
	cout << "a�� �� : " << *ap << endl;
	cout << "b�� �� : " << *bp << endl;
	swap_ptr(&ap, &bp);
	cout << "����� ����Դϴ�" << endl;
	cout << "a�� �� : " << *ap << endl;
	cout << "b�� �� : " << *bp << endl;
	return 0;
}
void swap_ptr(int** p1, int** p2) {
	int* tp;
	tp = *p1;
	*p1 = *p2;
	*p2 = tp;
}
