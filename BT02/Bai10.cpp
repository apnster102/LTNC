#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Fahrenheit;
	cin >> Fahrenheit;
	float Celsius = float((Fahrenheit-32)*5/9);
	float Kelvin = Celsius + 273.15;
	cout << "Fahrenheit   	Celsius  	Absolute Value" << endl;
	cout << Fahrenheit << "\t \t"  << fixed << setprecision(2) << Celsius;
	cout << "\t \t";
	cout << fixed << setprecision(2) << Kelvin << endl;

	return 0;
}
