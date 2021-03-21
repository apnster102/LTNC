#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* a, const char* b)
{
	int l1 = strlen(a), l2 = strlen(b), i = 0;
	char* result = new char[i];
	for(i = 0; i < l1; i++)
	{
		result[i] = a[i];
	}
	for(; i < l1+l2; i++)
	{
		result[i] = b[i-l1];
	}
	result[i] = '\0';
	return result;
}

int main()
{
	char a[] = "Hello";
	char b[] = "Aliens";
	cout << concat(a, b) << endl;
	return 0;
}
