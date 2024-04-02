#include <iostream>
using namespace std;
void getMaxScore(int arr[]);
int main() {
	int score[10];
	cout << "10개 과목의 성적을 입력해주세요" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << "번째 성적을 입력해주세요 : ";
		cin >> score[i];
	}
	getMaxScore(score);
	return 0;
}
void getMaxScore(int arr[]) {
	int max = arr[0];
	int index = 0;
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	cout << index + 1 << "번째 성적인 " << max << "점이 최고점입니다" << endl;
}
