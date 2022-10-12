#include <iostream>
using namespace std;

struct Wine
{
	int amount;
};
int main()
{
	int numofWine;
	cin >> numofWine;

	int** dp = new int* [numofWine+1];
	for (int i = 0; i < numofWine + 1; i++)
	{
		dp[i] = new int[2];
		dp[i][0] = 0;
		dp[i][1] = 0;
	}

	Wine* wines = new Wine[numofWine];
	Wine wine;
	for (int i = 0; i < numofWine; i++)
	{
		cin >> wine.amount;
		wines[i] = wine;
	}

	if (numofWine <= 1)
	{
		cout << wines[0].amount;
		return 0;
	}

	dp[0][0] = 0;
	dp[0][1] = wines[0].amount;
	dp[1][0] = wines[0].amount;
	dp[1][1] = dp[0][1] + wines[1].amount;
	for (int i = 2; i < numofWine + 1; i++)
	{
		dp[i][1] = max(dp[i - 2][0] + wines[i - 1].amount, dp[i - 2][1]) + wines[i].amount;
		dp[i][0] = max(dp[i - 2][1], dp[i - 1][1]);
	}

	cout << max(dp[numofWine - 1][0], dp[numofWine - 1][1]);
	return 0;
}