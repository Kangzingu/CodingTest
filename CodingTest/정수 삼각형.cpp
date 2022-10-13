//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofLevel;
//	cin >> numofLevel;
//
//	int** pyramid = new int* [numofLevel];
//	int** dp = new int* [numofLevel];
//	for (int i = 0; i < numofLevel; i++)
//	{
//		pyramid[i] = new int[numofLevel];
//		dp[i] = new int[numofLevel];
//		for (int j = 0; j <= i; j++)
//		{
//			cin >> pyramid[i][j];
//			if (i == numofLevel - 1)
//				dp[i][j] = pyramid[i][j];
//		}
//	}
//
//	for (int i = numofLevel - 2; i >= 0; i--)
//		for (int j = 0; j <= i; j++)
//			dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + pyramid[i][j];
//
//	cout << dp[0][0];
//
//	return 0;
//}