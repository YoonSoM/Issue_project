#include <iostream>
using namespace std;
void line_down(int* x, int* y, int* z);
void swap(int* x, int* y);
int main() {
	int max, mid, min;
	cout << "�� 3���� ���ʴ�� �Է����ּ���";
	cin >> min >> mid >> max;
	line_down(&min, &mid, &max);
	cout << "���İ���� " << min << " " << mid << " " << max << " �Դϴ�" << endl;
	return 0;
}
void line_down(int* x, int* y, int* z) {
	if (*x > *y)
		swap(x, y);
	if (*x > *z)
		swap(x, z);
	if (*y > *z)
		swap(y, z);
}
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}
