#include <iostream>
using namespace std;

void PhanSoToiGian(int&, int&);

int main()
{
	int tu, mau;
	cin >> tu >> mau;
	PhanSoToiGian(tu, mau);
	return 0;
}

void PhanSoToiGian(int& tu, int& mau)
{
	int a = tu;
	int b = mau;
	while(a != b)
	{
		if(a > b) a = a-b;
		else b = b-a;
	}
	int ucln = a;
	cout << tu/a << '/' << mau/a;
}