//Problem Statement
//Takahashi is wearing white now.He wears black on the day after he wears white, and he wears white on the day after he wears black.
//What color will he wear N days later ?
//
//Constraints
//N is an integer.
//1 ≤ N ≤30
//Input
//Input is given from Standard Input in the following format :
//N
//Output
//If he will wear white N days later, print White; if he will wear black, print Black.

#include <iostream>
using namespace std;
int main()
{
	int N; cin >> N;
	if (N % 2 == 0)cout << "White";
	else cout << "Black";

	return 0;
}