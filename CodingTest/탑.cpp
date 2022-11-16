//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//struct Tower
//{
//	int idx;
//	int height;
//};
//
//struct Compare
//{
//	bool operator()(Tower t1, Tower t2)
//	{
//		if (t1.height > t2.height)
//		{
//			return true;
//		}
//
//		return false;
//	}
//};
//
//int main()
//{
//	int numofTower;
//	cin >> numofTower;
//
//	vector<Tower> towers;
//	Tower tower;
//	for (int i = 0; i < numofTower; i++)
//	{
//		cin >> tower.height;
//		tower.idx = i + 1;
//		towers.push_back(tower);
//	}
//
//	priority_queue<Tower, vector<Tower>, Compare> prevTowers;
//	Tower prevMinHeightTower;
//	vector<int> ans;
//	for (int i = 0; i < numofTower; i++)
//	{
//		while (true)
//		{
//			if (prevTowers.empty() == true)
//			{
//				prevTowers.push(towers[i]);
//				ans.push_back(0);
//				break;
//			}
//
//			prevMinHeightTower = prevTowers.top();
//
//			if (towers[i].height > prevMinHeightTower.height)
//			{
//				prevTowers.pop();
//			}
//			else
//			{
//				prevTowers.push(towers[i]);
//				ans.push_back(prevMinHeightTower.idx);
//				break;
//			}
//		}
//	}
//
//	for (int i = 0; i < ans.size(); i++)
//	{
//		cout << ans[i] << " ";
//	}
//
//	return 0;
//}