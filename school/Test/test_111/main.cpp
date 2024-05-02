#include <iostream>
using namespace std;
int main()
{
	int* arrP = new int[5];
	arrP[0] = 1;
	arrP[1] = 2;
	arrP[2] = 3;
	arrP[3] = 4;
	arrP[4] = 5;
	for (int i = 0; i < 5; i++)
		cout << arrP[i] << " ";
	return 0;
}
