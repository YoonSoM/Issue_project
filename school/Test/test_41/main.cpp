#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int d1, d2, d3;
	int flag = 0;
	int num = 0;
	srand((unsigned int)time(NULL));
	do {
		num++;
		d1 = rand() % 6 + 1; // 1-6
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		if (d1 == d2 && d2 == d3)
			flag = 1;
	} while (flag == 0);
	cout << "주사위를 총 " << num << "번 던졌습니다" << endl;
	cout << "세 개의 주사위는 숫자 " << d1 << "을 가리키고 있습니다" << endl;
	return 0;
}