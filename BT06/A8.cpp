#include <iostream>
using namespace std;

void combination(int data[], int start, int end, int index, int k)
{
	if (index == k)
    {
        cout << "[ ";
        for (int j = 0; j < k; j++)
            cout << data[j] << " ";
        cout << " ] \n";
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= k - index; i++)
    {
        data[index] = i;
        combination(data, i+1, end, index+1, k);
    }
}

 void printCombination(int n, int k)
 {
 	int store[k];
 	combination(store, 1, n, 0, k);
 }

int main()
{
	int n, k;
	cin >> n >> k;
	printCombination(n, k);

	return 0;
}
