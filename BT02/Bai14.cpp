#include <iostream>
using namespace std;

int main()
{
	int n;
	int max, min;
	cin >> n;
	max = n;
	min = n;
	do
	{
		cin >> n;
		if(n > max) max = n;
		if(n < min && n >= 0) min = n;
	}
	while (n >= 0);

	cout << max << ' ' << min;

	return 0;
}
