#include <iostream>
using namespace std;
int main() {
	int score[5];
	int sum = 0;
	float avg = 0;
	cout << "첫 번째 학생의 시험점수를 입력하세요";
	cin >> score[0];
	cout << "두 번째 학생의 시험점수를 입력하세요";
	cin >> score[1];
	cout << "세 번째 학생의 시험점수를 입력하세요";
	cin >> score[2];
	cout << "네 번째 학생의 시험점수를 입력하세요";
	cin >> score[3];
	cout << "다섯 번째 학생의 시험점수를 입력하세요";
	cin >> score[4];
	sum = score[0] + score[1] + score[2] + score[3] + score[4];
	avg = sum / 5.0;
	cout << "5명 학생의 평균은 " << avg << "입니다" << endl;
	return 0;
}