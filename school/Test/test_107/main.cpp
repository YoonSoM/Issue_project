#include <iostream>
using namespace std;
int sum(int a, int b);
int main() {
	int (*fp)(int, int);
	fp = sum;
	int result = fp(10, 20);
	cout << "°á°ú : " << result << endl;
	return 0;
}
int sum(int a, int b) {
	return (a + b);
}
