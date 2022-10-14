//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//
//	int** dp = new int*[n + 1];
//	for (int i = 0; i < n + 1; i++)
//	{
//		dp[i] = new int[n + 1];
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				dp[i][j] = 1;
//				continue;
//			}
//
//			dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
//			dp[i][j] %= 10007;
//		}
//	}
//
//	cout << dp[n][k];
//
//	return 0;
//}