#include <iostream>
using namespace std;
int main() {
	char s1[80], s2[80];
	int count = 0;
	cout << "단어를 입력해주세요 : ";
	cin >> s1;
	cout << "입력하신 단어는 아래와 같습니다" << endl;
	for (int i = 0; i < 80; i++) {
		if (s1[i] == '\0')
			break;
		cout << s1[i];
		count++;
	}
	cout << endl << "입력하신 단어를 거꾸로 출력하겠습니다" << endl;
	for (int i = count; i >= 0; i--) {// 4 3 2 1 0
		/*
		s2[0] = s1[4];
		s2[1] = s1[3];
		s2[2] = s1[2];
		s2[3] = s1[1];
		s2[4] = s1[0];*/
		s2[count - i] = s1[i - 1];
	}
	for (int i = 0; i < count; i++)
		cout << s2[i];
	/*
	for (int i = count; i >= 0; i--)
	cout << s1[i];
	*/
	return 0;
}
