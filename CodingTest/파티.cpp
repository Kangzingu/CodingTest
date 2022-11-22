//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define MAX_DIST 100000
//
//int main()
//{
//	int numofVillage, numofRoad, targetVillage;
//	cin >> numofVillage >> numofRoad >> targetVillage;
//	targetVillage--;
//
//	int** dists = new int* [numofVillage];
//	for (int i = 0; i < numofVillage; i++)
//	{
//		dists[i] = new int[numofVillage];
//		for (int j = 0; j < numofVillage; j++)
//		{
//			if (i == j)
//			{
//				dists[i][j] = 0;
//				continue;
//			}
//
//			dists[i][j] = MAX_DIST;
//		}
//	}
//
//	int src, dest, dist;
//	for (int i = 0; i < numofRoad; i++)
//	{
//		cin >> src >> dest >> dist;
//		src--;
//		dest--;
//
//		dists[src][dest] = dist;
//	}
//
//	queue<int> q;
//	bool* isVisited = new bool[numofVillage];
//	int* minDists = new int[numofVillage];
//	int* minDistsSum = new int[numofVillage];
//	for (int i = 0; i < numofVillage; i++)
//	{
//		isVisited[i] = false;
//		minDists[i] = MAX_DIST;
//		minDistsSum[i] = 0;
//	}
//
//	q.push(targetVillage);
//	minDists[targetVillage] = 0;
//
//	int curVillage;
//	int curDist = 0;
//	while (true)
//	{
//		if (q.empty() == true)
//			break;
//
//		curVillage = q.front();
//		q.pop();
//
//		isVisited[curVillage] = true;
//
//		int minDistIdx;
//		int minDist = MAX_DIST;
//		for (int i = 0; i < numofVillage; i++)
//		{
//			if (isVisited[i] == true)
//				continue;
//
//			if (dists[curVillage][i] == MAX_DIST)
//				continue;
//
//			if (curDist + dists[curVillage][i] >= minDists[i])
//				continue;
//
//			minDists[i] = curDist + dists[curVillage][i];
//		}
//
//		for (int i = 0; i < numofVillage; i++)
//		{
//			if (isVisited[i] == true)
//				continue;
//
//			if (minDists[i] >= minDist)
//				continue;
//
//			minDist = minDists[i];
//			minDistIdx = i;
//		}
//
//		if (minDist == MAX_DIST)
//			continue;
//
//		q.push(minDistIdx);
//		curDist = minDists[minDistIdx];
//	}
//
//	for (int i = 0; i < numofVillage; i++)
//		minDistsSum[i] += minDists[i];
//
//	for (int i = 0; i < numofVillage; i++)
//	{
//		isVisited[i] = false;
//		minDists[i] = MAX_DIST;
//	}
//
//	q.push(targetVillage);
//	minDists[targetVillage] = 0;
//
//	curDist = 0;
//
//	while (true)
//	{
//		if (q.empty() == true)
//			break;
//
//		curVillage = q.front();
//		q.pop();
//
//		isVisited[curVillage] = true;
//
//		int minDistIdx;
//		int minDist = MAX_DIST;
//		for (int i = 0; i < numofVillage; i++)
//		{
//			if (isVisited[i] == true)
//				continue;
//
//			if (dists[i][curVillage] == MAX_DIST)
//				continue;
//
//			if (curDist + dists[i][curVillage] >= minDists[i])
//				continue;
//
//			minDists[i] = curDist + dists[i][curVillage];
//		}
//
//		for (int i = 0; i < numofVillage; i++)
//		{
//			if (isVisited[i] == true)
//				continue;
//
//			if (minDists[i] >= minDist)
//				continue;
//
//			minDist = minDists[i];
//			minDistIdx = i;
//		}
//
//		if (minDist == MAX_DIST)
//			continue;
//
//		q.push(minDistIdx);
//		curDist = minDists[minDistIdx];
//	}
//
//	int maxofMinDistsSum = 0;
//	for (int i = 0; i < numofVillage; i++)
//	{
//		minDistsSum[i] += minDists[i];
//
//		if (minDistsSum[i] > maxofMinDistsSum)
//			maxofMinDistsSum = minDistsSum[i];
//	}
//
//	cout << maxofMinDistsSum;
//
//	return 0;
//}