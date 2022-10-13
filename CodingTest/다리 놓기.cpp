//#include <iostream>
//using namespace std;
//
//unsigned long long dp[30][30];
//unsigned long long DP(int lhs, int rhs)
//{
//	if (lhs == 1)
//		return dp[lhs][rhs];
//
//	if (dp[lhs][rhs] != 0)
//		return dp[lhs][rhs];
//
//	for (int i = 0; i <= rhs - lhs; i++)
//	{
//		dp[lhs][rhs] += DP(lhs - 1, rhs - i - 1);
//	}
//
//	return dp[lhs][rhs];
//}
//
//
//int main()
//{
//	for (int i = 0; i < 30; i++)
//	{
//		for (int j = 0; j < 30; j++)
//			dp[j][i] = 0;
//		
//		dp[1][i] = i;
//	}
//
//	int numofCase;
//	cin >> numofCase;
//
//	for (int caseCount = 0; caseCount < numofCase; caseCount++)
//	{
//		int numofLeftSpot, numofRightSpot;
//		cin >> numofLeftSpot >> numofRightSpot;
//
//		cout << DP(numofLeftSpot, numofRightSpot) << endl;
//	}
//	return 0;
//}