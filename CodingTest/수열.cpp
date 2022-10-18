//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofNum;
//	cin >> numofNum;
//
//	int* nums = new int[numofNum];
//	int** dp = new int* [numofNum];
//	for (int i = 0; i < numofNum; i++)
//	{
//		cin >> nums[i];
//		dp[i] = new int[2];
//		for (int j = 0; j < 2; j++)
//			dp[i][j] = 1;
//	}
//
//	int maxLen = 1;
//	for (int i = 1; i < numofNum; i++)
//	{
//		if (nums[i] >= nums[i - 1])
//			dp[i][0] = max(dp[i][0], dp[i - 1][0] + 1);
//
//		if (nums[i] <= nums[i - 1])
//			dp[i][1] = max(dp[i][1], dp[i - 1][1] + 1);
//
//		maxLen = max(maxLen, max(dp[i][0], dp[i][1]));
//	}
//
//	cout << maxLen;
//
//	return 0;
//}