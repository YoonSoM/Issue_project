#include <iostream>
using namespace std;
struct point {
	int x;
	int y;
};
struct Rectangle {
	struct point a;
	struct point b;
};
/*
struct Rectangle {
int x1;
int y1;
int x2;
int y2;
};*/
int main()
{
	struct Rectangle rect;
	rect.a.x = 1;
	rect.a.y = 2;
	rect.b.x = 3;
	rect.b.y = 4;
	/*
	struct Rectangle rect;
	rect.x1 = 1;
	rect.x2 = 3;
	rect.y1 = 2;
	rect.y2 = 4;*/
	return 0;
}
