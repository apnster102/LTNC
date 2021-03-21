#include <iostream>
using namespace std;

void JohnsonTrotter(int n, int l, int r)
{
	int data[n];
	for (int i = 0; i < n; i++)
	{
		data[i] = i+1;
	}

	if(l == r)
	{
		for (int j = 0; j < n; j++)
		{
			cout << data[j] << ' ';
		}
		cout << endl;
	}
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap(data[l], data[i]);
			JohnsonTrotter(n, l+1, r);
			swap(data[l], data[i]);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	JohnsonTrotter(n, 1, n);
	return 0;
}