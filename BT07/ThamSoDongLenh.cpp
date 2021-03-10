#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char* argv[2] = {"ab", "ababab"}

	int l1 = argv[1].length();
	int l2 = argv[2].length();
	int times = 0;
	if(l1 > l2) cout << 0;
	else
	{
		int temp_pos = 0;
		for (int i = temp_pos; i < l; i++)
		{
			if(strcmp(argv[1], argv[2].substr(argv[2][temp_pos],argv[2][temp_pos+l1])) == 0)
			{
				times++;
				temp_pos += l1;
			}
		}
	}
	cout << times;
	return 0;
}
