#include <iostream>
using namespace std;
int main() {
	int n;
	do {
		cout << "어서오세요. 맛있는 음식점입니다" << endl;
		cout << "***** 메뉴 *****" << endl;
		cout << " 1. 떡볶이" << endl;
		cout << " 2. 피자" << endl;
		cout << " 3. 치킨 " << endl;
		cout << " 4. 파스타" << endl;
		cout << "****************" << endl;
		cout << "먹고 싶은 음식의 번호를 선택해주세요" << endl;
		cin >> n;
	} while (n < 1 || n>4);
	//(!(n >= 1 && n <= 4));
	if (n == 1)
		cout << "떡볶이를 주문하셨습니다" << endl;
	else if (n == 2)
		cout << "피자를 주문하셨습니다" << endl;
	else if (n == 3)
		cout << "치킨을 주문하셨습니다" << endl;
	else
		cout << "파스타를 주문하셨습니다" << endl;
	return 0;
}
