#include <iostream>
using namespace std;
enum day { sun, mon, tue, wed, thr, fri, sat };
int main()
{
	enum day a;
	a = fri;
	cout << a << endl;
	return 0;
}
