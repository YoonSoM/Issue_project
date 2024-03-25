#include <iostream>
using namespace std;
int main() {
	int h[3];
	int sum = 0;
	float avg = 0;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 학생의 키를 입력하세요";
		cin >> h[i];
		sum += h[i];
	}
	avg = sum / 3.0;
	cout << "3명 학생의 평균은 " << avg << "입니다" << endl;
	return 0;
}