//Problem Statement
//The window of Takahashi's room has a width of A.There are two curtains hung over the window, each of which has a horizontal length of B. 
//(Vertically, the curtains are long enough to cover the whole window.)
//We will close the window so as to minimize the total horizontal length of the uncovered part of the window.Find the total horizontal length of the uncovered parts of the window then.
//Constraints
//1 ≤ A ≤ 100
//1 ≤ B ≤100
//A and B are integers.
//Input
//Input is given from Standard Input in the following format :
//A B
//Output
//Print the total horizontal length of the uncovered parts of the window.

#include <iostream>

using namespace std;

int main()
{
	int A, B; cin >> A >> B;

	if (A - (B * 2) >= 0)cout << A - (B * 2);
	else cout << 0;

	return 0;
}