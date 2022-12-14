//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define INF 100002
//
//int main()
//{
//	pair<int, int>* map = new pair<int, int>[100001];
//	for (int i = 0; i < 100001; i++)
//	{
//		map[i].first = INF;
//		map[i].second= 1;
//	}
//
//	int curPos, targetPos;
//	cin >> curPos >> targetPos;
//
//	queue<int> q;
//	q.push(curPos);
//	map[curPos].first = 0;
//	map[curPos].second = 1;
//
//	while (true)
//	{
//		if (q.empty() == true)
//			break;
//
//		curPos = q.front();
//		q.pop();
//
//		if (curPos - 1 >= 0)
//		{
//			if (map[curPos].first + 1 < map[curPos - 1].first)
//			{
//				map[curPos - 1].first = map[curPos].first + 1;
//				map[curPos - 1].second = map[curPos].second;
//				q.push(curPos - 1);
//			}
//			else if (map[curPos].first + 1 == map[curPos - 1].first)
//				map[curPos - 1].second+= map[curPos].second;
//		}
//
//		if (curPos + 1 <= 100000)
//		{
//			if (map[curPos].first + 1 < map[curPos + 1].first)
//			{
//				map[curPos + 1].first = map[curPos].first + 1;
//				map[curPos + 1].second = map[curPos].second;
//				q.push(curPos + 1);
//			}
//			else if (map[curPos].first + 1 == map[curPos + 1].first)
//				map[curPos + 1].second += map[curPos].second;
//		}
//
//		if (curPos * 2 <= 100000)
//		{
//			if (map[curPos].first + 1 < map[curPos * 2].first)
//			{
//				map[curPos * 2].first = map[curPos].first + 1;
//				map[curPos * 2].second = map[curPos].second;
//				q.push(curPos * 2);
//			}
//			else if (map[curPos].first + 1 == map[curPos * 2].first)
//				map[curPos * 2].second += map[curPos].second;
//		}
//	}
//
//	cout << map[targetPos].first << endl;
//	cout << map[targetPos].second;
//
//	return 0;
//}