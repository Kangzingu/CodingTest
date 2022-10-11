#include <iostream>
using namespace std;

struct Coin
{
	int price;
};
int main()
{
	int numofCase;
	cin >> numofCase;
	
	for (int caseCount = 0; caseCount < numofCase; caseCount++)
	{
		int numofCoin, targetPrice;
		cin >> numofCoin;

		Coin* coins = new Coin[numofCoin];
		Coin coin;
		for (int i = 0; i < numofCoin; i++)
		{
			cin >> coin.price;
			coins[i] = coin;
		}

		cin >> targetPrice;

		int* dp = new int[targetPrice + 1];
		for (int i = 0; i < targetPrice + 1; i++)
			dp[i] = 0;

		for (int i = 0; i < numofCoin; i++)
		{
			dp[coins[i].price] ++;
			for (int j = coins[i].price + 1; j < targetPrice + 1; j++)
			{
				if (dp[j - coins[i].price] == 0)
					continue;

				dp[j] = dp[j - coins[i].price] + dp[coins[i].price];
				cout << "Price: " << j << ", 경우의 수: " << dp[j] << endl;
			}
			cout << endl;
		}
		/*for (int i = 0; i < targetPrice + 1; i++)
		{
			cout << "Price: " << i << ", 경우의 수: " << dp[i] << endl;
		}*/
		//cout << dp[targetPrice] << endl;

		delete[] coins;
		delete[] dp;
	}
	return 0;
}
