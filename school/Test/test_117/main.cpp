#include <iostream>
using namespace std;
struct point {
	int x;
	int y;
};
int main()
{
	struct point a;
	struct point* b = &a;
	a.x = 1;
	a.y = 2;
	cout << "a�� x��ǥ�� " << a.x << ", y��ǥ�� " << a.y << endl;
	b->x = 3;
	b->y = 4;
	cout << "a�� x��ǥ�� " << a.x << ", y��ǥ�� " << a.y << endl;
	(*b).x = 5;
	(*b).y = 6;
	cout << "a�� x��ǥ�� " << a.x << ", y��ǥ�� " << a.y << endl;
	return 0;
}
