#include <iostream>
#include <cstring>
using namespace std;

struct String
{
	int n;
	char* str;

	String(int _n)
	{
		n = _n;
		str = new char[n];
	}

	String(const char* a)
	{
		n = strlen(a);
		str = new char[n];
		strcpy(str, a);
	}

	~String()
	{
		delete []str;
	}

	void const print()
	{
		cout << str;
	}

	void const append(const char* a)
	{
		int length = strlen(a);
		char* temp = new char[n + length];
		strcpy(temp, str);
		strcat(temp, a);
		str = temp;
	}
};

int main()
{
	String demo("Ay");
	demo.append(" yo");
	demo.print();
	return 0;
}
