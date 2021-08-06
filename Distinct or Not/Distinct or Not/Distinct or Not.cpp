//Problem Statement
//Given is a sequence of integers
//A1,A2,...,AN.If its elements are pairwise distinct, print YES; otherwise, print NO.
//
//Constraints
//2≤N≤200000
//1≤Ai≤10^9
//All values in input are integers.
//Input
//Input is given from Standard Input in the following format :
//
//N
//A1...AN
//
//Output
//If the elements of the sequence are pairwise distinct, print YES; otherwise, print NO.

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 2e5 + 10;
int arr[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}