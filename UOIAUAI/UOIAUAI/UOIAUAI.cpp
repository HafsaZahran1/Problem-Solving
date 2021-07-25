//Problem Statement
//Given a lowercase English letter c, determine whether it is a vowel.Here, there are five vowels in the English alphabet : a, e, i, oand u.
//Constraints
//c is a lowercase English letter.
//Input
//The input is given from Standard Input in the following format :
//c
//Output
//If c is a vowel, print vowel.Otherwise, print consonant.

#include <iostream>
using namespace std;
int main()
{
	char letter; cin >> letter;
	switch (letter)
	{
	case 'a':case 'e':case 'i':case 'o':case 'u':
		cout << "vowel";
		break;
	default:
		cout << "consonant";
	}
	return 0;
}