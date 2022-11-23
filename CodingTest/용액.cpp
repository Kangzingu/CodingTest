//#include <iostream>
//using namespace std;
//
//int Abs(int num)
//{
//	if (num < 0)
//		return -num;
//	else
//		return num;
//}
//
//int main()
//{
//	int numofLiquid;
//	cin >> numofLiquid;
//
//	int* liquids = new int[numofLiquid];
//	for (int i = 0; i < numofLiquid; i++)
//		cin >> liquids[i];
//
//	int leftPointer = 0;
//	int rightPointer = numofLiquid - 1;
//	int minCombVal = 2000000001;
//	int minCombLiquid1, minCombLiquid2;
//	int curCombVal, curCombLiquid1, curCombLiquid2;
//	while (true)
//	{
//		if (leftPointer == rightPointer)
//			break;
//
//		curCombVal = liquids[leftPointer] + liquids[rightPointer];
//
//		if (Abs(curCombVal) < Abs(minCombVal))
//		{
//			minCombLiquid1 = liquids[leftPointer];
//			minCombLiquid2 = liquids[rightPointer];
//			minCombVal = minCombLiquid1 + minCombLiquid2;
//		}
//
//		if (minCombVal == 0)
//		{
//			cout << minCombLiquid1 << " " << minCombLiquid2;
//
//			return 0;
//		}
//
//		else if (curCombVal < 0)
//			leftPointer++;
//		else if (curCombVal > 0)
//			rightPointer--;
//	}
//
//	cout << minCombLiquid1 << " " << minCombLiquid2;
//
//	return 0;
//}