//#include <iostream>
//using namespace std;
//
//int targetNum;
//unsigned long long dp[81];
//
//unsigned long long DP(int num)
//{
//	if (dp[num] != 0)
//	{
//		return dp[num];
//	}
//
//	return dp[num] = DP(num - 1) + DP(num - 2);
//}
//
//int main()
//{
//	cin >> targetNum;
//	
//	for (int i = 0; i < 81; i++)
//	{
//		dp[i] = 0;
//	}
//	dp[1] = 1;
//	dp[2] = 1;
//	
//	unsigned long long result;
//	result = DP(targetNum) * 3 +
//		DP(targetNum - 1) * 2 +
//		DP(targetNum - 2) * 2 +
//		DP(targetNum - 3);
//
//	if (targetNum == 1)
//	{
//		cout << 4;
//	}
//	else if (targetNum == 2)
//	{
//		cout << 6;
//	}
//	else if (targetNum == 3)
//	{
//		cout << 10;
//	}
//	else
//	{	
//		cout << result;
//	}
//
//	return 0;
//}