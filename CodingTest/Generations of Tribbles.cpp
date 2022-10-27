#include <iostream>
using namespace std;

unsigned long long dp[68];
unsigned long long DP(unsigned long long n)
{
	if (dp[n] != 0)
		return dp[n];

	if (n < 2)
		return dp[n] = 1;
	else if (n == 2)
		return dp[n] = 2;
	else if (n == 3)
		return dp[n] = 4;
	else
		return dp[n] = DP(n - 1) + DP(n - 2) + DP(n - 3) + DP(n - 4);
}
int main()
{
	int numofCase;
	cin >> numofCase;

	for (int caseCount = 0; caseCount < numofCase; caseCount++)
	{
		int num;
		cin >> num;

		cout << DP(num) << endl;
	}

	return 0;
}