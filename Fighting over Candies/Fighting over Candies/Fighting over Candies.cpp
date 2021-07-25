//Problem Statement
//Two students of AtCoder Kindergarten are fighting over candy packs.
//There are three candy packs, each of which contains a, b, and c candies, respectively.
//Teacher Evi is trying to distribute the packs between the two students so that each student gets the same number of candies.Determine whether it is possible.
//Note that Evi cannot take candies out of the packs, and the whole contents of each pack must be given to one of the students.
//Constraints
//1 ≦ a,b,c ≦ 100
//Input
//The input is given from Standard Input in the following format :
//a
//b
//c
//Output
//If it is possible to distribute the packs so that each student gets the same number of candies, print Yes.Otherwise, print No.

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c || a + c == b || c + b == a)cout << "Yes";
	else cout << "No";

	return 0;
}