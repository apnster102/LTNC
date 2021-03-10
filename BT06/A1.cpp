#include <iostream>
using namespace std;

void f(int a[])
{
	cout << &a << endl << &a[0];
}

int main()
{
	int A[3] = {1, 2, 3};
	cout << "Trong ham main: " << endl;
	cout << &A << endl << &A[0] << endl;
	/*địa chỉ của A và A[0] giống nhau*/

	cout << "Tu ham f: " << endl;
	f(A);
	/*địa chỉ của a và a[0] khác nhau, a[0] có cùng địa chỉ với A


	Mảng được truyền vào hàm theo cơ chế giống truyền tham chiếu
    địa chỉ của phần tử đầu tiên trong mảng*/


	return 0;
}
