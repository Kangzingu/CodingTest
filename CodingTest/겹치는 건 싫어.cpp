//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	int numofNum, limitofAppear;
//	cin >> numofNum >> limitofAppear;
//
//	int* nums = new int[numofNum];
//	unordered_map<int, int> appearCount;
//	unordered_map<int, bool> isExceeded;
//
//	int cur;
//	int maxofLength = 1;
//	int curAdjustIdx = 0;
//	int curLength = 0;
//	for (int i = 0; i < numofNum; i++)
//	{
//		cin >> cur;
//		nums[i] = cur;
//		appearCount[cur]++;
//		curLength++;
//
//		if (appearCount[cur] > limitofAppear)
//			isExceeded[cur] = true;
//
//		if (isExceeded.empty() == false)
//		{
//			while (true)
//			{
//				appearCount[nums[curAdjustIdx]]--;
//				curLength--;
//
//				if (appearCount[nums[curAdjustIdx]] <= limitofAppear)
//					isExceeded.erase(nums[curAdjustIdx]);
//				
//				if (appearCount[nums[curAdjustIdx]] == 0)
//					appearCount.erase(nums[curAdjustIdx]);
//
//				curAdjustIdx++;
//
//				if (isExceeded.empty() == true)
//					break;
//			}
//		}
//		else
//		{
//			if (curLength > maxofLength)
//				maxofLength = curLength;
//		}
//	}
//
//	cout << maxofLength;
//
//	return 0;
//}