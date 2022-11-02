//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofNums;
//	cin >> numofNums;
//
//	int* nums = new int[numofNums];
//	int* dp = new int[numofNums];
//	for (int i = 0; i < numofNums; i++)
//	{
//		cin >> nums[i];
//		dp[i] = 1001;
//	}
//	dp[0] = 0;
//	for (int i = 0; i < numofNums; i++)
//	{
//		for (int j = i + 1; j <= i + nums[i]; j++)
//		{
//			if (j >= numofNums)
//				continue;
//
//			if (dp[i] + 1 < dp[j])
//				dp[j] = dp[i] + 1;
//		}
//	}
//
//	if (dp[numofNums - 1] == 1001)
//		cout << -1;
//	else
//		cout << dp[numofNums - 1];
//
//	return 0;
//}