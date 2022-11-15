//#include <iostream>
//using namespace std;
//
//struct Subject
//{
//	int importace;
//	int requiredTime;
//};
//int main()
//{
//	int maxofStudyTime, numofSubject;
//	cin >> maxofStudyTime >> numofSubject;
//
//	Subject* subjects = new Subject[numofSubject];
//	for (int i = 0; i < numofSubject; i++)
//	{
//		cin >> subjects[i].importace >> subjects[i].requiredTime;
//	}
//
//	int* dp = new int[maxofStudyTime + 1];
//	for (int i = 0; i < maxofStudyTime + 1; i++)
//	{
//		dp[i] = 0;
//	}
//
//	int maxofImportance = 0;
//	for (int i = 0; i < numofSubject; i++)
//	{
//		for (int j = maxofStudyTime - subjects[i].requiredTime; j >= 0; j--)
//		{
//			if (dp[j] + subjects[i].importace <= dp[j + subjects[i].requiredTime])
//			{
//				continue;
//			}
//
//			dp[j + subjects[i].requiredTime] = dp[j] + subjects[i].importace;
//		}
//	}
//
//	for (int i = 0; i < maxofStudyTime + 1; i++)
//	{
//		if (dp[i] > maxofImportance)
//		{
//			maxofImportance = dp[i];
//		}
//	}
//
//	cout << maxofImportance;
//
//	return 0;
//}