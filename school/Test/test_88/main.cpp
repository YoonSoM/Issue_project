#include <iostream>
using namespace std;
void swap_ptr(int** p1, int** p2);
int main() {
	int a = 3;
	int b = 5;
	int* ap = &a;
	int* bp = &b;
	cout << "a의 값 : " << *ap << endl;
	cout << "b의 값 : " << *bp << endl;
	swap_ptr(&ap, &bp);
	cout << "변경된 결과입니다" << endl;
	cout << "a의 값 : " << *ap << endl;
	cout << "b의 값 : " << *bp << endl;
	return 0;
}
void swap_ptr(int** p1, int** p2) {
	int* tp;
	tp = *p1;
	*p1 = *p2;
	*p2 = tp;
}
