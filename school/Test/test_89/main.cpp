#include <iostream>
using namespace std;
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* b = a;
	cout << "�⺻ �迭 a�� �� ��� : ";
	//cout << a[0] << " " << a[1]
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;
	/*
	*b = 6;
	b = &a[1];
	*b = 7;
	b = &a[2];
	*b = 8;
	b = &a[3];
	*b = 9;
	b = &a[4];
	*b = 10;*/
	/*
	*b = *b+5;
	b += 1;
	*b = 7;
	b += 1;
	*b = 8;
	b += 1;
	*b = 9;
	b += 1;
	*b = 10;*/
	/*
	for (int i = 0; i < 5; i++) {
	*b = *b + 5;
	b = b + 1;
}
b = a;
cout << "����� �迭�� �� : ";
for (int i = 0; i < 5; i++)
cout << b[i] <<" ";
cout << endl;*/
	for (int i = 0; i < 5; i++)
		*(b + i) += 5;
	cout << "����� �迭�� �� : ";
	for (int i = 0; i < 5; i++)
		cout << *(b + i) << " ";
	cout << endl;
	return 0;
}
