//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofNum;
//	cin >> numofNum;
//
//	int* nums = new int[numofNum];
//	int* dp = new int[numofNum];
//	for (int i = 0; i < numofNum; i++)
//	{
//		cin >> nums[i];
//		dp[i] = nums[i];
//	}
//
//	int maxVal = 0;
//	for (int i = 0; i < numofNum; i++)
//	{
//		for (int j = i+1; j < numofNum; j++)
//		{
//			if (nums[i] >= nums[j])
//				continue;
//
//			if (dp[j] >= dp[i] + nums[j])
//				continue;
//
//			dp[j] = dp[i] + nums[j];
//		}
//
//		if (dp[i] > maxVal)
//			maxVal = dp[i];
//	}
//
//	cout << maxVal;
//	return 0;
//}