#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "����� �����ϴ� ���߱�����?" << endl;
	cout << "1:����ö 2:����";
	cin >> n;
	switch (n) {
	case 1:
		cout << "����� ����ö�� ���� �����Ͻô±���" << endl;
		break;
	case 2:
		cout << "����� ������ ���� �����Ͻô±���" << endl;
		break;
	default:
		cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
	}
	return 0;
}
