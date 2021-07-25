//Problem Statement
//There is a hotel with the following accommodation fee :
//X yen(the currency of Japan) per night, for the first K nights
//Y yen per night, for the (  K  +  1)- th and subsequent nights
//Tak is staying at this hotel for N consecutive nights.Find his total accommodation fee.
//Constraints
//1≤ N,K ≤ 10000
//1 ≤ Y < X  ≤    10000
// N    ,    K    ,    X    ,    Y    are integers.
// 
//Input
//The input is given from Standard Input in the following format :
//N
//K
//X
//Y
//Output
//Print Tak's total accommodation fee.

#include <iostream>
using namespace std;
int main()
{
	int N, K, X, Y;
	cin >> N >> K >> X >> Y;
	if (N > K)cout << K * X + (N - K) * Y;
	else cout << N * X;
	return 0;
}