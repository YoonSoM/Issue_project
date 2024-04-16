#include <iostream>
using namespace std;
void line_down(int* x, int* y, int* z);
void swap(int* x, int* y);
int main() {
	int max, mid, min;
	cout << "수 3개를 차례대로 입력해주세요";
	cin >> min >> mid >> max;
	line_down(&min, &mid, &max);
	cout << "정렬결과는 " << min << " " << mid << " " << max << " 입니다" << endl;
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
