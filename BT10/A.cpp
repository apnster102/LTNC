#include <iostream>
using namespace std;

struct Point
{
	int x, y;
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
};

void print(Point a)
{
	cout << "(" << a.x << ", " << a.y << ")\n";
}

void passByVal(Point b)
{
	cout << &b << endl;
}
void passByRef(Point &b)
{
	cout << &b << endl;
}

Point mid_point(const Point &a, const Point &b)
{
	Point mp;
	mp.x = (a.x + b.x)/2;
	mp.y = (a.y + b.y)/2;
	return mp;
}

int main()
{
	Point d(1, 2), e(3, 4);
	cout << "d: \n";
	print(d);
	cout << &d << endl;
	cout << "Pass by value: ";
	passByVal(d);
	cout << "Pass by reference: ";
	passByRef(d);
	cout << "mid point d&e: ";
	print(mid_point(d, e));

	//dia chi cua d la dia chi cua d.x, d.y lien sau
	cout << &d << ' ' << &d.x << ' ' << &d.y << endl;
	return 0;
}
