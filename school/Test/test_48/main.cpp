#include <iostream>
using namespace std;
int hour(double x);
int minutes(double x);
int secs(double x);
int main() {
	double time = 4.32;
	int h, m, s;
	h = hour(time);
	time -= h;
	time = time * 60.0;
	m = minutes(time);
	time -= m;
	time = time * 60.0;
	s = secs(time);
	cout << "4.32�ð��� " << h << "�ð� " << m << "�� " << s << "�� �Դϴ�" << endl;
	return 0;
}
int hour(double x) {
	int h;
	h = (int)x;
	return h;
}
int minutes(double x) {
	int m;
	m = (int)x;
	return m;
}
int secs(double x) {
	int s;
	s = (int)x;
	return s;
}
