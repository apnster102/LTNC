#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char* argv[])
{
	  int l1, l2;
	  int count = 0;

	  l1 = strlen(argv[2]);
	  l2 = strlen(argv[1]);

	  for(int i = 0; i < l1 - l2; i++) {
	    if(strstr(argv[2] + i, argv[1]) == argv[2] + i)
	    {
	      count++;
	      i = i + l2 -1;
	    }
	  }

	  cout << count;
	return 0;
}