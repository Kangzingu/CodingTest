////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////struct Coin
////{
////	int price;
////	Coin() {};
////	Coin(int price) : price(price) {};
////};
////
////bool CompareCoin(Coin lhs, Coin rhs)
////{
////	if (lhs.price < rhs.price)
////		return true;
////
////	return false;
////}
////
////int main()
////{
////	int numofCase = 3;
////	for (int caseCount = 0; caseCount < numofCase; caseCount++)
////	{
////		int sortofCoin;
////		cin >> sortofCoin;
////
////		vector<Coin> coins;
////		int price, numofCoin;
////		for (int i = 0; i < sortofCoin; i++)
////		{
////			cin >> price >> numofCoin;
////
////			for (int j = 0; j < numofCoin; j++)
////				coins.push_back(Coin(price));
////		}
////
////		sort(coins.begin(), coins.end(), CompareCoin);
////
////		int sum1 = 0;
////		int sum2 = 0;
////		for (int i = coins.size() - 1; i >= 0; i--)
////		{
////			if (sum1 > sum2)
////				sum2 += coins[i].price;
////			else
////				sum1 += coins[i].price;
////		}
////
////		if (sum1 == sum2)
////			cout << 1 << endl;
////		else
////			cout << 0 << endl;
////	}
////
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofCase = 3;
//	for (int caseCount = 0; caseCount < numofCase; caseCount++)
//	{
//		bool dp[50001]{ false };
//		int totalPrice = 0;
//
//		int sortofCoin;
//		cin >> sortofCoin;
//
//		int price, numofCoin;
//		for (int i = 0; i < sortofCoin; i++)
//		{
//			cin >> price >> numofCoin;
//			for (int j = 0; j < numofCoin; j++)
//			{
//				totalPrice += price;
//				for (int k = totalPrice - price; k >= 0; k--)
//				{
//					if (k + price > 50000)
//						break;
//
//					if (dp[k] == false)
//						continue;
//
//					dp[k + price] = true;
//				}
//
//				if (price > 50000)
//					continue;
//
//				dp[price] = true;
//			}
//		}
//
//		if (dp[totalPrice / 2] == false || totalPrice % 2 == 1)
//			cout << 0 << endl;
//		else
//			cout << 1 << endl;
//	}
//
//	return 0;
//}