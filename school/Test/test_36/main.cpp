#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++) {
		cout << i << " �ݺ�" << endl;
		if (i == 5)
			continue;
		cout << i << " �ȳ��ϼ���" << endl;
	}
	return 0;
}
