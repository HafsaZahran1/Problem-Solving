//Problem Statement
//Snuke is giving cookies to his three goats. He has two cookie tins.One contains A cookies, and the other contains Bcookies.He can thus give
//A cookies, B cookies or A + B cookies to his goats(he cannot open the tins).
//Your task is to determine whether Snuke can give cookies to his three goats so that each of them can have the same number of cookies.
//Constraints
//1 ≤ A ,B ≤ 100
//Both A and B are integers.
////Input
//Input is given from Standard Input in the following format : A B
//Output
//If it is possible to give cookies so that each of the three goats can have the same number of cookies, print Possible; otherwise, print Impossible.
#include <iostream>

using namespace std;
int main()
{
	int A, B; cin >> A >> B;

	if (A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0) cout << "Possible";
	else cout << "Impossible";
	return 0;
}
