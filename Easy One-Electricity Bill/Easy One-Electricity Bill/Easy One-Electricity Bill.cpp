//Chef wants to calculate his Electricity bill, Help him to do so
//
//Acc to Conditions : -
//For First 50 units Rs 0.50 / unit
//For next 100 units Rs 0.75 / unit
//For next 100 units Rs 1.20 / unit
//For unit above 250 Rs 1.50 / unit
//An additional surcharge of 20 % is added to the bill
//Input
//Integer n(number of units he consumed).
//Output
//Bill Amount.
//Constraints
//1 <= N <= 10000

#include <iostream>
#include<iomanip>

using namespace std;
int main()
{
	int n; cin >> n;
	float billNoSurcharge, billSurcharge;


	if (n <= 50)
	{
		billNoSurcharge = (n * 0.5);
	}
	else if (n <= 150)
	{
		billNoSurcharge = (25) + ((n - 50) * 0.75);

	}
	else if (n <= 250)
	{
		billNoSurcharge = 100 + ((n - 150) * 1.20);

	}
	else if (n > 250)
	{
		billNoSurcharge = 220 + ((n - 250) * 1.50);

	}
	billSurcharge = billNoSurcharge + (billNoSurcharge * 0.2);
	cout << fixed << setprecision(2) << billSurcharge;

	return 0;
}