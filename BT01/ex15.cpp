#include <iostream>
using namespace std;

string FibonacciWord(int n)
{
	if(n == 0) return "a";
	if(n == 1) return "b";
	return FibonacciWord(n-1)+FibonacciWord(n-2);
}

int main()
{
	for (int i = 0; i <= 10; i ++)
	{
		cout << FibonacciWord(i) << endl;
	}
	return 0;
}