#include <iostream>
using namespace std;

void reverse(char a[]);
void delete_char(char a[], char c);
void pad_right(char a[], int n);
void pad_left(char a[], int n);
void truncate(char a[], int n);
bool is_palindrome(char a[]);
void trim_right(char a[]);
void trim_left(char a[]);

int main()
{
    char a[100];
    int key;
    bool quit = 0;
    while(!quit)
    {
        cout << "Nhap ten bai (nhap 0 de thoat) : ";
        cin >> key;
        cout << "Nhap chuoi ky tu: ";
        cin >> a;
        switch(key)
        {
            case 1:
                cout << "Reverse: ";
                reverse(a);
                cout << a << endl;
                break;
            case 2:
                cout << "Delete 'c' : ";
                delete_char(a, 'c');
                cout << a << endl;
                break;
            case 3:
                cout << "Pad right 5: ";
                pad_right(a, 5);
                cout << a << "end" << endl;
                break;
            case 4:
                cout << "Pad left 10: ";
                pad_left(a, 10);
                cout << a << endl;
                break;
            case 5:
                cout << "Truncate 6: ";
                truncate(a, 6);
                cout << a << endl;
                break;
            case 6:
                cout << is_palindrome(a) << endl;
                break;
            case 7:
                trim_right(a);
                cout << a << "end" << endl;
                break;
            case 8:
                trim_left(a);
                cout << a << endl;
                break;
            case 0:
                quit = 1;
        }
    }


	return 0;
}

int strlen(char a[])
{
    int l = 0;
    for (char* cp = a; (*cp) != '\0'; cp++)
    {
        l++;
    }
    return l;
}

void reverse(char a[])
{
	int i = 0, j = strlen(a)-1;
	while(i < j)
	{
		swap(*(a+i), *(a+j));
		i++;
		j--;
	}
}

void delete_char(char a[], char c)
{
    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
    	if(*(a+i) == c)
        {
            for (int j = i; j < l; j++)
            {
                *(a+j) = *(a+j+1);
            }
            l--;
        }
    }
}

void pad_right(char a[], int n)
{
    int l = strlen(a);
    if(l < n)
    {
        while(l != n)
        {
            *(a+l) = ' ';
            l++;
        }
        *(a+l) = '\0';
    }
}

void pad_left(char a[], int n)
{
    int l = strlen(a);
    if(l < n)
    {
       while(l != n)
       {
           for (int i = l; i > 0; i--)
           {
               *(a+i) = *(a+i-1);
           }
           *a = ' ';
           l++;
       }
    }
}

void truncate(char a[], int n)
{
    int l = strlen(a);
    if(l > n)
    {
        *(a+n) = '\0';
    }
}

bool is_palindrome(char a[])
{
    int i = 0, j = strlen(a)-1;
    while(i < j)
    {
        if(*(a+i) != *(a+j))
            return 0;
        i++;
        j--;
    }
    return 1;
}

void trim_right(char a[])
{
    int l = strlen(a);
    while(*(a+l-1) == ' ')
    {
        *(a+l-1) = '\0';
        l--;
    }
}

void trim_left(char a[])
{
    int l = strlen(a);
    while(*a == ' ')
    {
        delete_char(a, *a);
    }
}
