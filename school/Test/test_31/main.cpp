#include <iostream>
using namespace std;
int main() {
	int n;
	int i = 1;
	cout << "�������� ����ϰڽ��ϴ�" << endl;
	cout << "�� ���� ����ұ��?" << endl;
	cin >> n;
	while (i <= 9) {
		// n * i = ���
		cout << n << " * " << i << " = " << n * i << endl;
		i++;
	}
	return 0;
}