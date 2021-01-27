#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int n, ans;
	do
	{
		cin >> n;
		ans = (n > 0 && n %5 == 0) ? (n/5) : (-1);
		cout << ans;
	}while(ans != -1);
	cout << endl <<  "bye";

	return 0;
}
