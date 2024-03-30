#include <iostream>
using namespace std;
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int arr_b[5];
	//arr_b = arr;
	/*
	arr_b[0] = arr[0];
	arr_b[1] = arr[1];
	arr_b[2] = arr[2];
	arr_b[3] = arr[3];
	arr_b[4] = arr[4];*/
	for (int i = 0; i < 5; i++)
		arr_b[i] = arr[i];
	for (int i = 0; i < 5; i++)
		cout << arr_b[i] << " ";
	return 0;
}
