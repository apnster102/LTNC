#include <iostream>
using namespace std;

void NumToEng(int n);

int main()
{
	int n;
	cin >> n;
	cout << n << " in English is:";
	NumToEng(n);

	return 0;
}

void NumToEng(int n)
{
	string ones[] = {" Zero",
                     " One ",
                     " Two ",
                     " Three ",
                     " Four ",
                     " Five ",
                     " Six ",
                     " Seven ",
                     " Eight ",
                     " Nine ",
                     " Ten ",
                     " Eleven ",
                     " Twelve ",
                     " Thirteen ",
                     " Fourteen ",
                     " Fifteen ",
                     " Sixteen ",
                     " Seventeen ",
                     " Eighteen ",
                     " Nineteen "};

 	string tens[] = { " Twenty",
                     " Thirty",
                     " Fourty",
                     " Fifty",
                     " Sixty",
                     " Seventy",
                     " Eighty",
                     " Ninety"};

 	if(n >= 0 && n < 20)
 	{
 		cout << ones[n];
 	}
 	else if(n >= 20 && n < 100)
 	{
 		int firstDigit = n /10;
 		int secondDigit = n %10;
 		cout << tens[firstDigit-2];
 		if(secondDigit > 0) cout << ones[secondDigit];
 	}
 	else if(n >= 100 && n < 1000)
 	{
 		int firstDigit = n/100;
 		cout << ones[firstDigit] << "hundred";
 		if(n%100 > 0) NumToEng(n %100);
 	}
 	else if(n >= 1000 && n < 1000000)
 	{
 		int firstDigit = n/1000;
 		NumToEng(firstDigit);
 		cout << "thousand";
 		if(n%1000> 0) NumToEng(n%1000);
 	}
 	else if(n >= 1000000 && n < 1000000000)
 	{
 		int firstDigit = n/1000000;
 		NumToEng(firstDigit);
 		cout << "million";
 		if(n%1000000) NumToEng(n%1000000);
 	}
 	else if(n < 0)
    {
        cout << " Negative";
        NumToEng(-n);
    }
}
