//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofSong, initVolume, maxofVolume;
//	cin >> numofSong >> initVolume >> maxofVolume;
//
//	int* volumes = new int[numofSong];
//	for (int i = 0; i < numofSong; i++)
//		cin >> volumes[i];
//
//	int* dp = new int[maxofVolume + 1];
//	int* dpCopy = new int[maxofVolume + 1];
//	for (int i = 0; i < maxofVolume + 1; i++)
//	{
//		dp[i] = -1;
//		dpCopy[i] = -1;
//	}
//
//	dp[initVolume] = 0;
//	dpCopy[initVolume] = 0;
//	for (int i = 0; i < numofSong; i++)
//	{
//		for (int j = maxofVolume; j >= 0; j--)
//		{
//			if (j + volumes[i] <= maxofVolume)
//				if (dp[j] != -1)
//					dpCopy[j + volumes[i]] = max(max(dp[j + volumes[i]], dp[j] + 1), dpCopy[j + volumes[i]]);
//
//			if (j - volumes[i] >= 0)
//				if (dp[j] != -1)
//					dpCopy[j - volumes[i]] = max(max(dp[j - volumes[i]], dp[j] + 1), dpCopy[j - volumes[i]]);
//		}
//
//		for (int j = 0; j < maxofVolume + 1; j++)
//			dp[j] = dpCopy[j];
//	}
//
//	int maxVal = -1;
//	for (int i = maxofVolume; i >= 0; i--)
//	{
//		if (dp[i] == numofSong)
//		{
//			maxVal = i;
//			break;	
//		}
//	}
//
//	cout << maxVal;
//
//	return 0;
//}