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
	cout << "aÀÇ xÁÂÇ¥´Â " << a.x << ", yÁÂÇ¥´Â " << a.y << endl;
	b->x = 3;
	b->y = 4;
	cout << "aÀÇ xÁÂÇ¥´Â " << a.x << ", yÁÂÇ¥´Â " << a.y << endl;
	(*b).x = 5;
	(*b).y = 6;
	cout << "aÀÇ xÁÂÇ¥´Â " << a.x << ", yÁÂÇ¥´Â " << a.y << endl;
	return 0;
}
