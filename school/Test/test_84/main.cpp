#include <iostream>
using namespace std;
int main() {
	int ary[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
		cout << "�迭 ary[" << i << "]��° �ּҴ� " << &ary[i] << "�Դϴ�" << endl;
	cout << "�迭�� �̸� ary�� �迭�� �ּҿ� �����ϴ� : " << ary << endl;
	return 0;
}
