#include <iostream>
using namespace std;
int main() {
	int a[6] = { 1,2,3,4,5,6 };
	int* front = &a[0];
	//int* front = a;
	int* back = &a[5];
	int temp;
	cout << "배열 a의 현재 내용" << endl;
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 3; i++) {
		temp = *front;
		*front = *back;
		*back = temp;
		front += 1;
		back -= 1;
	}
	cout << "배열 a의 변경된 내용" << endl;
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;

}