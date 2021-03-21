#include <iostream>
using namespace std;

char* reverse(const char a[]);
char* delete_char(const char a[], const char c);
char* pad_right(const char a[], int n);

int main()
{
    char a[10] = "ahahahoho";
    cout << a << endl;
    int key;
    bool quit = 0;
    while(!quit)
    {
        cout << "Nhap ten bai (nhap 0 de thoat) : ";
        cin >> key;
        switch(key)
        {
            case 1:
                cout << "Reverse: ";
                cout << reverse(a) << endl;
                break;
            case 2:
                cout << "Delete 'a' : ";
                cout << delete_char(a, 'a') << endl;
                break;
            case 3:
                cout << "Pad right n = 15: ";
                cout << pad_right(a, 15) << "end" << endl;
                break;
            case 0:
                quit = 1;
        }
    }
    return 0;
}

int strlen(const char a[])
{
    int l = 0;
    for (const char* cp = a; (*cp) != '\0'; cp++)
    {
        l++;
    }
    return l;
}

char* reverse(const char a[])
{
    int l = strlen(a);
    char *rev = new char [l];
    for (int i = 0; i < l; i++)
    {
        rev[i] = a[l-i-1];
    }
    rev[l] = '\0';
    return rev;
}

char* delete_char(const char a[], const char c)
{
    int l = strlen(a), k = 0;
    char* b = new char[k];
    for (int i = 0; i < l; i++)
    {
        if(a[i] != c)
        {
            b[k] = a[i];
            k++;
        }
    }
    b[k+1] = '\0';
    return b;
}

char* pad_right(const char a[], int n)
{
    int l = strlen(a), i = 0;
    char* b = new char[i];
    for (i = 0; i < l; i++)
    {
        b[i] = a[i];
    }
    while(l < n)
    {
        b[i] = ' ';
        i++;
        l++;
    }
    return b;
}

