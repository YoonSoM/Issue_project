#include <iostream>
using namespace std;
int main() {
	int a, b;
	int result;
	cout << "�� ���� ���� �ٸ� ������ �Է��ϼ���" << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	result = a > b ? a : b;
	cout << "�Էµ� �� �� �� ū ���� " << result << "�Դϴ�.";
	return 0;
}