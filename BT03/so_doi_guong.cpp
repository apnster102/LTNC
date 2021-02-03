
#include <iostream>

using namespace std;

int num_of_palindrome(int a, int b);

int main() {
	int T, a, b;
	cin >> T;										
	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cout << num_of_palindrome(a, b) << endl;
	}	
	return 0;	
}

bool is_palindrome(int n)
{
	int k = 0; temp = n;
	while(temp)
	{
		int x = temp%10;
		k = k*10 + x;
		temp /= 10;
	}
	if(k == n) return 1;
	return 0;
}

int num_of_palindrome(int a, int b)
{
	int ans;
	for (int i = a; i <= b; i++)
	{
		if(is_palindrome(i)) ans++;
	}
	return ans;
}