//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int numofNums;
//	cin >> numofNums;
//
//	int* nums = new int[numofNums];
//	int** dp = new int* [numofNums];
//	for (int i = 0; i < numofNums; i++)
//	{
//		cin >> nums[i];
//		dp[i] = new int[2];
//		dp[i][0] = 1;
//		dp[i][1] = -1;
//	}
//
//	int maxVal = 0;
//	int maxValIdx;
//	for (int i = 0; i < numofNums; i++)
//	{
//		for (int j = i; j < numofNums; j++)
//		{
//			if (dp[i][0] + 1 > dp[j][0] && nums[i] < nums[j])
//			{
//				dp[j][0] = dp[i][0] + 1;
//				dp[j][1] = i;
//
//			}
//
//			if (dp[j][0] > maxVal)
//			{
//				maxVal = dp[j][0];
//				maxValIdx = j;
//			}
//		}
//	}
//
//	vector<int> result;
//
//	cout << maxVal << endl;
//	int val = nums[maxValIdx];
//	int idx = dp[maxValIdx][1];
//	result.push_back(val);
//	while (true)
//	{
//		if (idx == -1)
//			break;
//
//		result.push_back(nums[idx]);
//		idx = dp[idx][1];
//	}
//
//	for (int i = result.size() - 1; i >= 0; i--)
//	{
//		cout << result[i] << " ";
//	}
//
//	return 0;
//}