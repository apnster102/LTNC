#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int *p = new int;
	p = &a;
	cout << p << endl;
	delete p;
    cout << &a;

    return 0;
}
