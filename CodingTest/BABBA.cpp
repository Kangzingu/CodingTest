//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int targetNum;
//	cin >> targetNum;
//
//	unsigned long long** dp = new unsigned long long* [targetNum + 1];
//	for (int i = 0; i < targetNum + 1; i++)
//	{
//		dp[i] = new unsigned long long[2];
//	}
//	dp[0][0] = 1; dp[0][1] = 0;
//	dp[1][0] = 0; dp[1][1] = 1;
//
//	if (targetNum >= 2)
//	{
//		dp[2][0] = 1;
//		dp[2][1] = 1;
//	}
//
//	if (targetNum >= 3)
//	{
//		dp[3][0] = 1;
//		dp[3][1] = 2;
//	}
//
//	for (int i = 4; i < targetNum + 1; i++)
//	{
//		dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
//		dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
//	}
//
//	cout << dp[targetNum][0] << " " << dp[targetNum][1];
//
//	return 0;
//}