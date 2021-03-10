#include <iostream>
using namespace std;

int binarySearch(int* a, int num, int low, int high)
{
	int mid = (low + high)/2;
	if(*(a+mid) == num) return mid;
	else if (*(a+mid) > num)
		return binarySearch(a, num, low, mid-1);
	else if (*(a+mid) < num)
		return binarySearch(a, num, mid+1, high);
}

int main()
{
	int* arr = new int[20];
	int num, low = 0, high = 19;
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i*10;
	}
	cin >> num;
	cout << "Num's position: " << binarySearch(arr, num, low, high);
	delete [] arr;
	return 0;
}
