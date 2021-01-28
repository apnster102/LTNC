#include <iostream>
#include <cmath>
using namespace std;

void print_primes(int n);
void print_perfectNums(int n);
void print_squareNums(int n);

int main()
{
	int n;
	cin >> n;
	cout << "Primes: " << endl;
	print_primes(n);
	cout << "Perfect numbers: " << endl;
	print_perfectNums(n);
	cout << "Square numbers: " << endl;
	print_squareNums(n);

	return 0;
}

void print_primes(int n)
{
	for (int i = 2; i <= n; i++)
	{
		bool flag = 0;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0) flag = 1;
		}
		if(flag == 0) cout << i << ' ';
	}
	cout << endl;
}

void print_perfectNums(int n)
{
	for (int i = 2; i <= n; i++)
	{
		int tmp = i;
		int k = 0;
		while(tmp)
		{
			k += tmp % 10;
			tmp /= 10;
		}
		if(k == i) cout << i << ' ';
	}
	cout << endl;
}

void print_squareNums(int n)
{
	for (int i = 2; i <= n; i++)
	{
		int k = sqrt(i);
		if(k*k == i) cout << i << ' ';
	}
	cout << endl;
}