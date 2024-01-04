#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "당신이 좋아하는 대중교통은?" << endl;
	cout << "1:지하철 2:버스";
	cin >> n;
	switch (n) {
	case 1:
		cout << "당신은 지하철을 가장 좋아하시는군요" << endl;
		break;
	case 2:
		cout << "당신은 버스를 가장 좋아하시는군요" << endl;
		break;
	default:
		cout << "잘못 입력하셨습니다" << endl;
	}
	return 0;
}
