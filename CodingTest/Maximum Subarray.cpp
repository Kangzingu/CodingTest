//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofCase;
//	cin >> numofCase;
//
//	int nums[1000];
//	int dp[1000];
//	for (int i = 0; i < 1000; i++)
//	{
//		nums[i] = 0;
//		dp[i] = 0;
//	}
//
//	for (int caseCount = 0; caseCount < numofCase; caseCount++)
//	{
//		int numofNum;
//		cin >> numofNum;
//
//		int maxSum = 0;
//		for (int i = 0; i < numofNum; i++)
//		{
//			cin >> nums[i];
//			dp[i] = nums[i];
//
//			if (dp[i] < maxSum)
//				maxSum = dp[i];
//		}
//
//
//		for (int i = 0; i < numofNum; i++)
//		{
//			int contSum = nums[i];
//			for (int j = i+1; j < numofNum; j++)
//			{
//				contSum += nums[j];
//
//				if (contSum > dp[j])
//					dp[j] = contSum;
//			}
//		}
//
//		for (int i = 0; i < numofNum; i++)
//			if (dp[i] > maxSum)
//				maxSum = dp[i];
//
//		cout << maxSum << endl;
//	}
//	return 0;
//}