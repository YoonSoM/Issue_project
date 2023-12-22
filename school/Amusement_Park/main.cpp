#include <iostream>
using namespace std;
int main() {
	int age, height;
	cout << "놀이동산에 오신것을 환영합니다\n나이를 입력해주세요";
	cin >> age;
	cout << "키를 입력해주세요 (cm)";
	cin >> height;
	/*
	if (age >= 7 && height >= 120)
	cout << "놀이기구 탑승 가능";
	else
	cout << "놀이기구 탑승 불가능";
	*/
	if (age >= 7) {
		if (height >= 120)
			cout << "놀이기구 탑승 가능";
		else
			cout << "놀이기구 탑승 불가능";
	}
	else
		cout << "놀이기구 탑승 불가능";
	return 0;
}