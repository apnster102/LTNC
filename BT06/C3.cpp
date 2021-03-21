#include <iostream>
using namespace std;

void combination(char data[], char start, char end, int index, int k)
{
	if(index == k)
	{
		cout << "[ " ;
		for (int i = 0; i < k; i++)
		{
			cout << data[i] << ' ';
		} 
		cout << " ]" << endl;
	}
	else
	{
		for (char j = start; j <= end && end - j+i >= k - index; j++)
		{
			data[index] = j;
			combination(data, j+1, end, index+1, k);
		}
	}
}

void printCombination(int n, int k)
{
	char data[k];
	combination(data, 'a', 'a' + n-1, 0, k);
}

int main()
{
	int n, k;
	cin >> n >> k;
	printCombination(n, k);
	return 0;
}