#include <iostream>
using namespace std;
int main() {
	float n;
	cout << "�Ǽ��� �Է��ϼ���";
	cin >> n;
	if (n < 0)
		n = n * (-1.0);
	//n *= (-1.0);
	cout << "����� " << n << "�Դϴ�." << endl;
	return 0;
}
