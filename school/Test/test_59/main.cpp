#include <iostream>
using namespace std;
int main() {
	int score[] = { 100,90,80,70,60 };
	int sum = 0;
	int avg = 0;
	cout << "배열전체크기 : " << sizeof(score) << endl;
	cout << "배열요소1개크기 : " << sizeof(score[0]) << endl;
	cout << "배열요소1개크기 : " << sizeof(score[1]) << endl;
	int count = sizeof(score) / sizeof(score[0]);
	cout << "이 배열은 " << count << "칸 입니다" << endl;
	for (int i = 0; i < count; i++)
		sum += score[i];
	avg = sum / 5.0;
	cout << "평균은 " << avg << "입니다" << endl;
	return 0;
}