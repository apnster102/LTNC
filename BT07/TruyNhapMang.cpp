#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int count_even(int*, int);

int main()
{
	srand(time(0));
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100 + 1;
	}
	cout << count_even(arr, n);
	delete [] arr;
	return 0;
}

int count_even(int* a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(*(a+i) %2 == 0) count++;
	}
	return count;
}