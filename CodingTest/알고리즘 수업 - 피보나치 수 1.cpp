//#include <iostream>
//using namespace std;
//
//unsigned long long dp[41];
//unsigned long long DP(int num)
//{
//	if (dp[num] != 0)
//		return dp[num];
//
//	return dp[num] = DP(num - 1) + DP(num - 2);
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	for (int i = 0; i < 41; i++)
//		dp[i] = 0;
//
//	dp[0] = 1;
//	dp[1] = 1;
//	dp[2] = 1;
//	dp[3] = 2;
//	dp[4] = 3;
//	dp[5] = 5;
//
//	cout << DP(num) << endl;
//	
//	if (num <= 2)
//		cout << 0;
//	else
//		cout << num - 2;
//
//	return 0;
//}