#include <iostream>
using namespace std;
int main() {
	int a;
	float b;
	double c;
	int* d;
	float* e;
	double* f;
	cout << "int�� ũ�� : " << sizeof(a) << endl;
	cout << "float�� ũ�� : " << sizeof(b) << endl;
	cout << "double�� ũ�� : " << sizeof(c) << endl;
	cout << "int�������� ũ�� : " << sizeof(d) << endl;
	cout << "float�������� ũ�� : " << sizeof(e) << endl;
	cout << "double�������� ũ�� : " << sizeof(f) << endl;
	return 0;
}
