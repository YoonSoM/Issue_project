#include <iostream>
using namespace std;
void getMinScore(int arr[]);
int main() {
	int score[10];
	cout << "10개 과목의 성적을 입력해주세요" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << "번째 성적을 입력해주세요 : ";
		cin >> score[i];
	}
	getMinScore(score);
	return 0;
}
void getMinScore(int arr[]) {
	int min = arr[0];
	int index = 0;
	for (int i = 0; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
			index = i;
		}
	}
	cout << "입력하신 성적 중 최저점은 " << index + 1 << "번째 성적인 " << min << "점입니다";
}
