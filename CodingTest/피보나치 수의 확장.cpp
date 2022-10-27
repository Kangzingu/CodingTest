//#include <iostream>
//using namespace std;
//
//long long dp[2000001];
//
//long long DP(int n)
//{
//	if (dp[n] != 1000000001)
//		return dp[n];
//
//	if (n < 1000000)
//		return dp[n] = (DP(n + 2) - DP(n + 1))%1000000000;
//	else
//		return dp[n] =(DP(n - 1) + DP(n - 2))%1000000000;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	n += 1000000;
//
//	for (int i = 0; i < 2000001; i++)
//		dp[i] = 1000000001;
//
//	dp[1000000] = 0;
//	dp[1000001] = 1;
//
//	long long result = DP(n);
//	
//	if (result < 0)
//		cout << -1<<endl;
//	else if (result == 0)
//		cout << 0 << endl;
//	else
//		cout << 1 << endl;
//
//	cout << abs(result);
//
//	return 0;
//}