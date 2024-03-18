#include <iostream>
using namespace std;
//더하기 2 함수 , 입력 : 숫자, 출력:더하기 2가 된 결과
float plus2(float x);
int main() {
	float a = 10;
	float b = plus2(a);
	cout << "결과는 " << b << "입니다" << endl;
	return 0;
}
float plus2(float x) {
	float result = x + 2;
	return result;
}
