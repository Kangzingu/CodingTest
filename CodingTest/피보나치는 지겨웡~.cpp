//#include <iostream>
//using namespace std;
//
//unsigned long long dp[51];
//
//unsigned long long DP(int num)
//{
//	if (dp[num] != 0)
//	{
//		return dp[num];
//	}
//
//	return dp[num] = (DP(num - 1) + DP(num - 2) + 1)%1000000007;
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	if (num < 2)
//	{
//		cout << 1;
//		return 0;
//	}
//	
//	for (int i = 0; i < 51; i++)
//	{
//		dp[i] = 0;
//	}
//	dp[0] = 1;
//	dp[1] = 1;
//
//	cout << DP(num);
//	return 0;
//}