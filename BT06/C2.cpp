#include <iostream>
using namespace std;

void permute(char data[], int l, int r)
{
	if(l == r)
		cout << data << endl;
	else
		for(int i = l; i <= r; i++)
		{
			swap(data[l], data[i]);
			permute(data, l+1, r);
			swap(data[l], data[i]);
		}
}

void combination(char data[], char start, char end, int index, int k)
{
	if(index == k)
	{
		cout << data << endl;
		permute(data, 0, k-1);
	}
	else
	{
		for(char j = start; j <= end && end - j+1 >= k - index; j++)
		{
			data[index] = j;
			combination(data, j+1, end, index+1, k);
		}
	}
}

void print(int n, int k)
{
	char data[k];
	combination(data, 'a', 'a'+n, 0, k);
}

int main()
{
	int n, k;
	cin >> n >> k;
	print(n, k);
	return 0;
}