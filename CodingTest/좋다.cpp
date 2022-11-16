//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct NumComb
//{
//	long long num;
//	int exceptIdx[2];
//};
//
//bool Compare(NumComb lhs, NumComb rhs)
//{
//	if (lhs.num < rhs.num)
//		return true;
//
//	return false;
//}
//
//bool BinarySearch(vector<NumComb>& numCombs, long long num, int idx)
//{
//	int l = 0;
//	int r = numCombs.size() - 1;
//	int c = (r + l) / 2;
//
//	while (true)
//	{
//		if (l > r)
//		{
//			return false;
//		}
//
//		if (num < numCombs[c].num)
//		{
//			r = c - 1;
//			c = (r + l) / 2;
//			continue;
//		}
//
//		else if (num > numCombs[c].num)
//		{
//			l = c + 1;
//			c = (r + l) / 2;
//			continue;
//		}
//		
//		vector<NumComb> sameNumCombs;
//		if (idx == numCombs[c].exceptIdx[0] || idx == numCombs[c].exceptIdx[1])
//		{
//			for (int i = c + 1; i <= r ; i++)
//			{
//				if (numCombs[i].num != num)
//					break;
//
//				sameNumCombs.push_back(numCombs[i]);
//			}
//
//			for (int i = c - 1; i>=0 ; i--)
//			{
//				if (numCombs[i].num != num)
//					break;
//
//				sameNumCombs.push_back(numCombs[i]);
//			}
//
//			if (sameNumCombs.empty() == true)
//				return false;
//
//			for (int i = 0; i < sameNumCombs.size(); i++)
//			{
//				if (idx == sameNumCombs[i].exceptIdx[0] || idx == sameNumCombs[i].exceptIdx[1])
//					continue;
//
//				return true;
//			}
//
//			return false;
//		}
//
//		return true;
//	}
//
//}
//
//int main()
//{
//	int numofNum;
//	cin >> numofNum;
//
//	vector<long long> nums;
//	long long num;
//	vector<NumComb> numCombs;
//	NumComb numComb;
//	for (int i = 0; i < numofNum; i++)
//	{
//		cin >> num;
//		nums.push_back(num);
//
//		for (int j = i - 1; j >= 0; j--)
//		{
//			numComb.num = num + nums[j];
//			numComb.exceptIdx[0] = i;
//			numComb.exceptIdx[1] = j;
//			numCombs.push_back(numComb);
//		}
//	}
//
//	sort(numCombs.begin(), numCombs.end(), Compare);
//
//	int goodCount = 0;
//	for (int i = 0; i < numofNum; i++)
//	{
//		if (BinarySearch(numCombs, nums[i], i) == true)
//			goodCount++;
//	}
//
//	cout << goodCount;
//
//	return 0;
//}