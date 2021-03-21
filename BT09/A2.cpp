#include <iostream>
using namespace std;

int main()
{
	int* p = new int;
	int* p2 = p;
	*p = 10;
	delete p;
	*p2 = 100;// loi truy cap vao dia chi da duoc giai phong
	cout << *p2;
	delete p2;

	return 0;
}
