//Problem Statement
//You are playing the slots.The result of a spin is represented by three uppercase English letters C1,C2, and C3.It is considered a win when all of them are the same letter.Determine whether it is a win.
//
//Constraints
//Ci is an uppercase English letter.
//Input
//Input is given from Standard Input in the following format :
//C1
//C2
//C3
//Output
//If the result is a win, print Won; otherwise, print Lost.

#include <iostream>
using namespace std;
int main()
{


	char C1, C2, C3; cin >> C1 >> C2 >> C3;

	if (C1 == C2 && C2 == C3)cout << "Won";
	else cout << "Lost";

	return 0;
}