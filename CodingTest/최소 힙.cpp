//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int numofCommand;
//	cin >> numofCommand;
//
//	priority_queue<int, vector<int>, greater<int>> pq;
//	int curNum;
//	for (int i = 0; i < numofCommand; i++)
//	{
//		cin >> curNum;
//		if (curNum == 0)
//		{
//			if (pq.empty() == true)
//			{
//				cout << 0 << "\n";
//				continue;
//			}
//
//			cout << pq.top() << "\n";
//			pq.pop();
//			continue;
//		}
//
//		pq.push(curNum);
//	}
//
//	return 0;
//}