#include <iostream>
using namespace std;
struct point {
	int x;
	int y;
};
struct circle {
	struct point a;
	int r;
};
int main()
{
	struct circle c;
	c.a.x = 3;
	c.a.y = 7;
	c.r = 5;
	return 0;}