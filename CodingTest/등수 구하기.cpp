//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long numofScore, newScore, sizeofRank;
//	cin >> numofScore >> newScore >> sizeofRank;
//
//	long long curRank = 0;
//	long long rankStack = 1;
//	long long prevInputScore = 2000000001;
//	long long curInputScore = 2000000001;
//	long long savedRank = 0;
//	for (int i = 0; i < numofScore; i++)
//	{
//		cin >> curInputScore;
//		
//		if (curInputScore == prevInputScore)
//			rankStack++;
//		else
//		{
//			curRank += rankStack;
//			rankStack = 1;
//		}
//
//		if (newScore > curInputScore)
//		{
//			if (savedRank == 0)
//				cout << curRank + rankStack - 1;
//			else
//				cout << savedRank;
//
//			return 0;
//		}
//		else if (newScore == curInputScore)
//			if (savedRank == 0)
//				savedRank = curRank + rankStack - 1;
//
//		if (i + 1 >= sizeofRank)
//		{
//			cout << -1;
//			return 0;
//		}
//
//		prevInputScore = curInputScore;
//	}
//
//	if (newScore < curInputScore)
//		cout << curRank + rankStack;
//	else if (newScore == curInputScore)
//		cout << savedRank;
//
//	return 0;
//}