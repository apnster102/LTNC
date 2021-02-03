#include <iostream>
#include <iomanip>
using namespace std;

void print_temp(int Fahrenheit);

int main()
{
	int Min, Max, Step_size;
	cin >> Min >> Max >> Step_size;

	cout << "Fahrenheit   	Celsius  	Absolute Value" << endl;
	for (int i = Min; i <= Max; i += Step_size)
	{
		print_temp(i);
	}

	return 0;
}

void print_temp(int Fahrenheit)
{
	float Celsius = float((Fahrenheit-32)*5/9);
	float Kelvin = Celsius + 273.15;
	cout << Fahrenheit << "\t \t"  << fixed << setprecision(2) << Celsius;
	cout << "\t \t";
	cout << fixed << setprecision(2) << Kelvin << endl;
}

