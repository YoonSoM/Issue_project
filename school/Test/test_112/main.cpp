#include <iostream>
using namespace std;
int main()
{
	int** arrP = new int* [2];
	//arrP[0] = new int[3];
	//arrP[1] = new int[3];
	for (int i = 0; i < 2; i++)
		arrP[i] = new int[3];
	/*arrP[0][0] = 1;
	arrP[0][1] = 2;
	arrP[0][2] = 3;
	arrP[1][0] = 4;
	arrP[1][1] = 5;
	arrP[1][2] = 6;*/
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			arrP[i][j] = (3 * i) + j + 1;//1, 2, 3, 2, 3, 4
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			cout << arrP[i][j] << " ";
		cout << endl;
	}
	return 0;
}
