//#include <iostream>
//#include <stdio.h>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int numofNum;
//	cin >> numofNum;
//
//	double* nums = new double[numofNum];
//	double* dp = new double[numofNum];
//	for (int i = 0; i < numofNum; i++)
//	{
//		cin >> nums[i];
//		dp[i] = nums[i];
//	}
//
//	double maxMulVal = 0;
//	for (int i = 0; i < numofNum; i++)
//	{
//		double curMulVal = nums[i];
//		for (int j = i + 1; j < numofNum; j++)
//		{
//			curMulVal *= nums[j];
//			
//			if (curMulVal > dp[j])
//			{
//				dp[j] = curMulVal;
//			}
//		}
//
//		if (dp[i] > maxMulVal)
//		{
//			maxMulVal = dp[i];
//		}
//	}
//
//	cout << fixed;
//	cout.precision(3);
//	cout << maxMulVal;
//	//printf("%.3f", maxMulVal);
//	//cout << (double)((round(maxMulVal * (double)1000)) / (double)1000);
//
//	return 0;
//}