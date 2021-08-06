//Problem Statement
//Dolphin loves programming contests.Today, he will take part in a contest in AtCoder.
//In this country, 24 - hour clock is used.For example,9:00 p.m.is referred to as "21o'clock".
//The current time is A o'clock, and a contest will begin in exactly B hours.When will the contest begin ? Answer in 24 - hour time.
//Constraints
//0 ≤ A,B ≤ 23
//A and B are integers.
//Input
//The input is given from Standard Input in the following format :
//A B
//Output
//Print the hour of the starting time of the contest in 24 - hour time.

#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	cout << (A + B) % 24;
	return 0;
}

