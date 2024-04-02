#include <iostream>
using namespace std;
int main() {
	float stu_weight[5];
	float sum = 0, avg;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 학생의 몸무게를 입력하세요 : ";
		cin >> stu_weight[i];
	}
	cout << "입력하신 사항은 아래와 같습니다." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 학생의 몸무게는 " << stu_weight[i] << "kg 입니다"
			<< endl;
		//sum += stu_weight[i];
	}
	int i = 0;
	while (i < 5) {
		sum += stu_weight[i];
		i++;
	}
	/*
	for (int i = 0; i < 5; i++)
	sum += stu_weight[i];
	*/
	avg = sum / 5.0;
	cout << "5명 학생의 몸무게의 평균은 " << avg << "kg 입니다" << endl;
	return 0;
}
