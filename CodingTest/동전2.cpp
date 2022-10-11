//#include <iostream>
//using namespace std;
//
//struct Coin
//{
//	int price;
//};
//int main()
//{
//	int numofCoin, targetPrice;
//	cin >> numofCoin >> targetPrice;
//
//	int* dp = new int[targetPrice + 1];
//	for (int i = 0; i < targetPrice + 1; i++)
//		dp[i] = 0;
//
//	Coin* coins = new Coin[numofCoin];
//	Coin coin;
//	for (int i = 0; i < numofCoin; i++)
//	{
//		cin >> coin.price;
//		coins[i] = coin;
//		dp[coins[i].price] = 1;
//	}
//
//	for (int i = 0; i < numofCoin; i++)
//	{
//		for (int j = coins[i].price; j <= targetPrice; j++)
//		{
//
//			if (dp[j] == 0 &&
//				j % coins[i].price == 0)
//				dp[j] = j / coins[i].price;
//
//			if ((dp[j] != 0 && dp[j] <= dp[j - coins[i].price] + 1) ||
//				dp[j - coins[i].price] == 0)
//				continue;
//
//			dp[j] = dp[j - coins[i].price] + 1;
//		}
//	}
//
//	/*for (int i = 0; i <= targetPrice; i++)
//	{
//		cout << "targetPrice: " << i << ", " << "coinCount: " << dp[i] << endl;
//	}*/
//	if (dp[targetPrice] == 0)
//		cout << -1;
//	else
//		cout << dp[targetPrice];
//
//	return 0;
//}