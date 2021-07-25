//Problem Statement
//A basketball game is being played, and the score is now X - Y .Here, it is guaranteed that X ≠ Y.
//Can the team which is behind turn the tables with a successful three - point goal ?
//In other words, if the team which is behind earns three points, will its score become strictly greater than that of the other team ?
//Constraints
//0 ≤ X ≤ 100
//0≤ Y ≤ 100
//X≠Y
//X and Y are integers.
//Input
//Input is given from Standard Input in the following format :
//X
//Y
//Output
//If the team which is behind can turn the tables with a successful three - point goal, print Yes; otherwise, print No.

#include <iostream>

using namespace std;
int main()
{
	int X, Y; cin >> X >> Y;

	if (abs(X - Y) < 3) cout << "Yes";
	else cout << "No";
	return 0;
}