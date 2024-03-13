#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 10; i++) {
		if (i >= 6)
			break;
		if (i % 2 == 0)
			cout << i << endl;
		else
			continue;
	}
	return 0;
}
