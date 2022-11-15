//#include <iostream>
//using namespace std;
//
//unsigned long long dp[1001][1001];
//unsigned long long DP(int row, int col)
//{
//	if (dp[row][col] != 0)
//	{
//		return dp[row][col];
//	}
//
//	if (row == 0 || col == 0)
//	{
//		return dp[row][col] = 1;
//	}
//
//	return dp[row][col] = (DP(row - 1, col) + DP(row - 1, col - 1) + DP(row, col - 1))%1000000007;
//}
//
//int main()
//{
//	int row, col;
//	cin >> row >> col;
//
//	cout << DP(row - 1, col - 1);
//
//	return 0;
//}