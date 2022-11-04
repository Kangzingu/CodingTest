//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int num;
//	cin >> num;
//
//	int* dp = new int[num + 1];
//
//	vector<int> answer;
//
//	for (int i = num; i >= 0; i--)
//	{
//		dp[i] = num + 1;
//	}
//	dp[num] = 0;
//
//	for (int i = num; i >= 1; i--)
//	{
//		if (dp[i] == num + 1)
//		{
//			continue;
//		}
//
//		if (i % 3 == 0)
//		{
//			if (dp[i] + 1 < dp[i / 3])
//			{
//				dp[i / 3] = dp[i] + 1;
//			}
//		}
//
//		if (i % 2 == 0)
//		{
//			if (dp[i] + 1 < dp[i / 2])
//			{
//				dp[i / 2] = dp[i] + 1;
//			}
//		}
//
//		if (dp[i] + 1 < dp[i - 1])
//		{
//			dp[i - 1] = dp[i] + 1;
//		}
//	}
//
//	int curVal = dp[1] - 1;
//	for (int i = 1; i < num + 1;)
//	{
//		if (i == num)
//		{
//			break;
//		}
//
//		if (i * 3 < num + 1)
//		{
//			if (dp[i * 3] == curVal)
//			{
//				answer.push_back(i * 3);
//				curVal--;
//				i *= 3;
//				continue;
//			}
//		}
//
//		if (i * 2 < num + 1)
//		{
//			if (dp[i * 2] == curVal)
//			{
//				answer.push_back(i * 2);
//				curVal--;
//				i *= 2;
//				continue;
//			}
//		}
//
//		if (i + 1 < num + 1)
//		{
//			if (dp[i + 1] == curVal)
//			{
//				answer.push_back(i + 1);
//				curVal--;
//				i += 1;
//				continue;
//			}
//		}
//	}
//
//	cout << dp[1] << endl;
//	for (int i = answer.size() - 1; i >= 0; i--)
//	{
//		cout << answer[i] << " ";
//	}
//	cout << 1 << " ";
//
//	return 0;
//}