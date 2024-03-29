#include <iostream>
using namespace std;
int main() {
	int age[3][5] = { {1,2,3},{6,7,8,9,10},{11,12,13,14,15} };
	//cout << age[0][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			cout << age[i][j] << " ";
		cout << endl;
	}
	return 0;
}
