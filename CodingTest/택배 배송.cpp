//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#define INF 50000001
//
//struct Path
//{
//	int src, dest, dist;
//	Path() {};
//	Path(int src, int dest, int dist) :src(src), dest(dest), dist(dist) {};
//};
//
//struct Compare
//{
//	bool operator()(Path lhs, Path rhs)
//	{
//		if (lhs.dist > rhs.dist)
//			return true;
//
//		return false;
//	}
//};
//
//int main()
//{
//	int numofNode, numofPath;
//	cin >> numofNode >> numofPath;
//
//	vector<Path>* paths = new vector<Path>[numofNode];
//	int src, dest, dist;
//	for (int i = 0; i < numofPath; i++)
//	{
//		cin >> src >> dest >> dist;
//		--src, --dest;
//		paths[src].push_back(Path(src, dest, dist));
//		paths[dest].push_back(Path(dest, src, dist));
//	}
//
//	int* minDists = new int[numofNode];
//	for (int i = 0; i < numofNode; i++)
//		minDists[i] = INF;
//
//	priority_queue<Path, vector<Path>, Compare> pq;
//	pq.push(Path(0, 0, 0));
//	minDists[0] = 0;
//
//	Path curPath;
//	while (true)
//	{
//		if (pq.empty() == true)
//			break;
//
//		curPath = pq.top();
//		pq.pop();
//
//		if (curPath.dist > minDists[curPath.dest])
//			continue;
//
//		for (int i = 0; i < paths[curPath.dest].size(); i++)
//		{
//			if (curPath.dist + paths[curPath.dest][i].dist >= minDists[paths[curPath.dest][i].dest])
//				continue;
//
//			minDists[paths[curPath.dest][i].dest] = curPath.dist + paths[curPath.dest][i].dist;
//			pq.push(Path(0, paths[curPath.dest][i].dest, minDists[paths[curPath.dest][i].dest]));
//		}
//	}
//
//	cout << minDists[numofNode - 1];
//
//	return 0;
//}