#include <iostream>
using namespace std;

void getInput(char bomb[][100], int m, int n);
void getOutput(char bomb[][100], int m, int n);
void print(char bomb[][100], int m, int n);

int main()
{
	int m, n;
	cin >> m >> n;
	char bomb[100][100];
	getInput(bomb, m, n);
	getOutput(bomb, m, n);
	print(bomb, m, n);
	return 0;
}

void getInput(char bomb[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> bomb[i][j];
		}
	}
}

void getOutput(char bomb[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int count = 0;
			if(bomb[i+1][j] == '*') count++;
			if(bomb[i+1][j-1] == '*') count++;
			if(bomb[i+1][j+1] == '*') count++;
			if(bomb[i][j-1] == '*') count++;
			if(bomb[i][j+1] == '*') count++;
			if(bomb[i-1][j-1] == '*') count++;
			if(bomb[i-1][j] == '*') count++;
			if(bomb[i-1][j+1] == '*') count++;

			if(bomb[i][j] == '.')
			{
				bomb[i][j] = (char)(count + '0');
			}
		}
	}
}
void print(char bomb[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << bomb[i][j] << ' ';
		}
		cout << endl;
	}
}
