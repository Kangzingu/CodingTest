//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct BiggerCompare
//{
//	bool operator()(int a, int b)
//	{
//		if (a > b)
//		{
//			return true;
//		}
//
//		return false;
//	}
//};
//
//struct SmallerCompare
//{
//	bool operator()(int a, int b)
//	{
//		if (a < b)
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
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	priority_queue<int, vector<int>, SmallerCompare> smallQ;
//	priority_queue<int, vector<int>, BiggerCompare> bigQ;
//	
//	int numofNum;
//	cin >> numofNum;
//
//	int inputVal;
//	int centerVal;
//	for (int i = 0; i < numofNum; i++)
//	{
//		cin >> inputVal;
//		
//		if (i == 0)
//		{
//			centerVal = inputVal;
//			cout << centerVal << "\n";
//			continue;
//		}
//
//		if (smallQ.size() >= bigQ.size())
//		{
//			bigQ.push(max(inputVal, centerVal));
//			centerVal = min(inputVal, centerVal);
//
//			if (smallQ.empty() == false)
//			{
//				if (centerVal < smallQ.top())
//				{
//					smallQ.push(centerVal);
//					centerVal = smallQ.top();
//					smallQ.pop();
//				}
//			}
//		}
//		else
//		{
//			smallQ.push(min(inputVal, centerVal));
//			centerVal = max(inputVal, centerVal);
//
//			if (bigQ.empty() == false)
//			{
//				if (centerVal > bigQ.top())
//				{
//					bigQ.push(centerVal);
//					centerVal = bigQ.top();
//					bigQ.pop();
//				}
//			}
//		}
//
//		cout << centerVal << "\n";
//	}
//
//	return 0;
//}
