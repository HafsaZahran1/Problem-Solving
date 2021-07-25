//Problem Statement
//AtCoDeer the deer recently bought three paint cans.The color of the one he bought two days ago is a, 
//he color of the one he bought yesterday is b, and the color of the one he bought today is c.
//Here, the color of each paint can is represented by an integer between 1 and 100, inclusive.
//
//Since he is forgetful, he might have bought more than one paint can in the same color.
//Count the number of different kinds of colors of these paint cansand tell him.
//
//Constraints
//1 ≦ a,b,c ≦ 100
//
//Input
//The input is given from Standard Input in the following format :
//a
//b
//c
//
//Output
//Print the number of different kinds of colors of the paint cans.

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a != b && b != c && a != c)cout << 3;
	else if (a == b && b == c) cout << 1;
	else cout << 2;

	return 0;

}