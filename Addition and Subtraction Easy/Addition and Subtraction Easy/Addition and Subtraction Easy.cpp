//Problem Statement
//Joisino wants to evaluate the formula " A op B". Here, A and B are integers, and the binary operator op is either + or -.Your task is to evaluate the formula instead of her.
//
//Constraints
//1 ≦ A,B ≦10^9
//op is either + or -.
//Input
//The input is given from Standard Input in the following format :
//A
//op
//B
//Output
//Evaluate the formula and print the result.

#include <iostream>
using namespace std;
int main()
{
	int A, B;
	char op;
	cin >> A >> op >> B;
	switch (op)
	{
	case '+':
		cout << A + B;
		break;
	case '-':
		cout << A - B;
		break;
	}
	return 0;
}