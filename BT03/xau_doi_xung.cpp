#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	int i = 0;
	int j = n-1;
	bool flag = 1;
	while(i < j)
	{
		if(s[i] != s[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
	}
	if (flag == 1) cout << "yes";
	else cout << "no";
	return 0;
}
