#include <iostream>
using namespace std;

int main()
{
    int k = 10;
	int a[5] = {1, 2, 3, 4, 5};
	int t = 20;
	char c = 'p';
	char b[3] = {'o', 'p', 'q'};
	char g = 's';
	
	cout << &k << endl;
	cout << &a[0] << ' ' << &a[1]  << ' ' << &a[2] << endl;
	cout << &t << endl;
	cout << static_cast<const void *> (&c) << endl;
	cout << static_cast<const void *> (&b[0]) << ' '
		 << static_cast<const void *> (&b[1])  << ' '
		 << static_cast<const void *> (&b[2]) << endl;
    cout << static_cast<const void *> (&g) << endl;

	return 0;
}
    /* Output
    0x6efe1c
    0x6efe00 0x6efe04 0x6efe08
    0x6efdfc
    0x6efdfb
    0x6efdf8 0x6efdf9 0x6efdfa
    0x6efdf7 */

// Cac phan tu cua a co dia chi la cac 4 byte lien tiep
// Cac phan tu cua b co dia chi la cac 1 byte lien tiep
// gia tri cua dia chi co chieu giam dan tu tren xuong duoi
