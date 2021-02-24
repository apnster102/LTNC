#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int loan;
	float rate_of_interest = 2.00/100.00;
	cin >> loan;
	int total_loan = loan*float(pow((1+rate_of_interest), 12));
	cout << total_loan;

	return 0;
}
