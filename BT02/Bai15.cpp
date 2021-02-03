#include <iostream>
#include <iomanip>
using namespace std;

int Fibonacci(int n)
{
	if(n == 1 || n == 2) return 1;
	return Fibonacci(n-2) + Fibonacci(n-1);
}

int main()
{
	int n;
	cin >> n;
	bool flag = 0;
	int point;
	for (int i = 1; i <= n; i++)
	{
		if(Fibonacci(i) == n)
		{
			flag = 1;
			point = i;
			break;
		}
		else if(Fibonacci(i) > n)
		{
			point = i-1;
			break;
		}
	}
	if(flag) cout << "n thuoc day Fibonacci. \n";
	else cout << "n khong thuoc day Fibonacci. \n";
	cout << "Day Fibonacci be hon hoac bang n: \n";
	for (int i = 1; i <= point; i++)
	{
		cout << Fibonacci(i) << ' ';
	}

	return 0;
}
