#include <iostream>
using namespace std;
int main() {
	int a;
	float b;
	double c;
	int* d;
	float* e;
	double* f;
	cout << "int형 크기 : " << sizeof(a) << endl;
	cout << "float형 크기 : " << sizeof(b) << endl;
	cout << "double형 크기 : " << sizeof(c) << endl;
	cout << "int포인터형 크기 : " << sizeof(d) << endl;
	cout << "float포인터형 크기 : " << sizeof(e) << endl;
	cout << "double포인터형 크기 : " << sizeof(f) << endl;
	return 0;
}
