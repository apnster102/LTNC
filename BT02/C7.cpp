#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int tmp = n;
	do
	{
		cin >> n;
		if(n != tmp) cout << n <<' ';
		tmp = n;
	}
	while(n >= 0);

	return 0;
}