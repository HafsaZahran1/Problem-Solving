//Problem Statement
//Serval is fighting with a monster.
//The health of the monster is H .
//In one attack, Serval can decrease the monster's health by A .There is no other way to decrease the monster's health.
//Serval wins when the monster's health becomes 0 or below.
//Find the number of attacks Serval needs to make before winning.
//Constraints
//1 ≤ H ≤ 10^4
//1 ≤ A ≤ 10^4
//All values in input are integers.
//Input
//Input is given from Standard Input in the following format :
//H A
//Output
//Print the number of attacks Serval needs to make before winning.


#include <iostream>

using namespace std;

int main() 
{

	int H, A;
	cin >> H >> A;
	int count = 0;
	
	for (int i=0; 0< H; i++)
	{ 
		H -= A;
		count++;
	}

	cout <<  count ;

	return 0;
}