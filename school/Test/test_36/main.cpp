#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++) {
		cout << i << " 반복" << endl;
		if (i == 5)
			continue;
		cout << i << " 안녕하세요" << endl;
	}
	return 0;
}
