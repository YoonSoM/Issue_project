#include <iostream>
using namespace std;
class Point {
protected:
	int x;
	int y;
public:
	Point();
	virtual void show();
	int getX() { return x; }
	int getY() { return y; }
	void setX(int n);
	void setY(int n);
};
class Point3 : public Point {
private:
	int z;
public:
	Point3();
	void show();
	void setXY(int xx, int yy);
	int getZ() { return z; }
	void setZ(int n);
};
Point::Point() {
	x = 0;
	y = 0;
	cout << "»õ·Î¿î point »ý¼º" << endl;
}
void Point::show() {
	cout << "xÁÂÇ¥ : " << x << " yÁÂÇ¥ : " << y << endl;
}
void Point::setX(int n) {
	if (n >= 0 && n <= 10)
		x = n;
	else
		cout << "¹üÀ§¸¦ ¹þ¾î³µ½À´Ï´Ù" << endl;
}
void Point::setY(int n) {
	if (n >= 0 && n <= 10)
		y = n;
	else
		cout << "¹üÀ§¸¦ ¹þ¾î³µ½À´Ï´Ù" << endl;
}
Point3::Point3() {
	z = 0;
	cout << "3Â÷¿ø ÁÂÇ¥ »ý¼º ¿Ï·á" << endl;
}
void Point3::setZ(int n) {
	if (n >= 0 && n <= 10)
		z = n;
	else
		cout << "¹üÀ§¸¦ ¹þ¾î³µ½À´Ï´Ù" << endl;
}
void Point3::show() {
	cout << "xÁÂÇ¥ : " << x << " yÁÂÇ¥ : " << y << " zÁÂÇ¥ : " << z << endl;
}
void Point3::setXY(int xx, int yy) {
	if (xx >= 0 && xx <= 10)
		x = xx;
	else
		x = 0;
	if (yy >= 0 && yy <= 10)
		y = yy;
	else
		y = 0;
}
int main()
{
	Point* pp[2];
	Point p1;
	Point3 p31;
	pp[0] = &p1;
	pp[0]->setX(3);
	pp[0]->setY(2);
	pp[1] = &p31;
	pp[1]->setX(5);
	pp[1]->setY(9);
	pp[0]->show();
	cout << endl;
	pp[1]->show();
	return 0;
}