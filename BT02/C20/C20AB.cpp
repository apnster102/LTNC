#include <iostream>
using namespace std;

int salary(int work_time);
int money_earned(int salary);
	
int main()
{
	int work_time;
	cout << "Enter working time: ";
	cin >> work_time;
	cout << "Salary: ";
	cout << salary(work_time);
	cout << "Money earned: ";
	cout << money_earned(salary);
	
	return 0;
}

int salary(int work_time)
{
	int salary = 0;
	if(work_time <= 100)
		salary = work_time*12000;
	else if(work_time <= 150 && work_time > 100)
		salary = (work_time-100)*16000 + 1200000;
	else if(work_time <= 200 && work_time > 150)
		salary = (work_time-150)*20000 + 50*16000 + 1200000;
	else if(work_time > 200)
		salary = (work_time-200)*25000 + 50*36000 + 1200000;
	return salary;
}

int money_earned(int salary)
{
	int money_earned = 0;
	int money_after_insurance = salary - salary*9/100;
	if(money_after_insurance <= 1000000)
		money_earned = money_after_insurance;
	else if(money_after_insurance > 1000000 && money_after_insurance <= 1500000)
		money_earned = money_after_insurance - (money_after_insurance-1000000)*10/100;
	else if(money_after_insurance > 1500000 && money_after_insurance <= 2000000)
		money_earned = money_after_insurance - (money_after_insurance-1500000)*15/100 - 50000;
	else if(money_after_insurance > 2000000)
		money_earned = money_after_insurance - (money_after_insurance-2000000)*20/100 - 125000;

	return money_earned;
}
