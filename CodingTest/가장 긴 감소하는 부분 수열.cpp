//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofNum;
//	cin >> numofNum;
//
//	int* dp = new int[numofNum];
//	int* nums = new int[numofNum];
//	for (int i = 0; i < numofNum; i++)
//	{
//		cin >> nums[i];
//		dp[i] = 1;
//	}
//
//	int maxVal =0;
//	for (int i = 0; i < numofNum; i++)
//	{
//		for (int j = i+1; j < numofNum; j++)
//		{
//			if (nums[j] >= nums[i])
//				continue;
//
//			if (dp[j] >= dp[i] + 1)
//				continue;
//
//			dp[j] = dp[i] + 1;
//		}
//		if (dp[i] > maxVal)
//			maxVal = dp[i];
//	}
//
//	cout << maxVal;
//
//	return 0;
//}