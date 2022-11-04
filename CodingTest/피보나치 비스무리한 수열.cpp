//#include <iostream>
//using namespace std;
//
//unsigned long long dp[117];
//
//unsigned long long DP(int num)
//{
//	if (dp[num] != 0)
//	{
//		return dp[num];
//	}
//
//	return dp[num] = DP(num - 1) + DP(num - 3);
//}
//int main()
//{
//	int targetNum;
//	cin >> targetNum;
//	
//	for (int i = 0; i < 117; i++)
//	{
//		dp[i] = 0;
//	}
//	dp[1] = 1;
//	dp[2] = 1;
//	dp[3] = 1;
//
//	cout << DP(targetNum);
//
//	return 0;
//}