#include <iostream>
using namespace std;

struct ViewCount
{
	int left;
	int right;
	ViewCount()
	{
		left = 0;
		right = 0;
	}
};

int main()
{
	int numofPeople;
	cin >> numofPeople;

	int* talls = new int[numofPeople];
	for (int i = 0; i < numofPeople; i++)
		cin >> talls[i];
	
	ViewCount* viewCounts = new ViewCount[numofPeople];

	int incCount = 1;
	viewCounts[0].left = 0;
	int prevTallerIdx;
	for (int i = 1; i < numofPeople; i++)
	{
		if (talls[i] >= talls[i - 1])
		{
			while (true)
			{
				prevTallerIdx = i - incCount;

				if (talls[prevTallerIdx] > talls[i])
					break;

				if (prevTallerIdx <= 0)
					break;

				incCount += viewCounts[prevTallerIdx].left;
			}
			viewCounts[i].left = incCount;
			incCount++;
		}
		else if (talls[i] < talls[i - 1])
		{
			viewCounts[i].left = 1;
			incCount = 1;
		}
	}

	incCount = 1;
	viewCounts[numofPeople - 1].right = 0;
	for (int i = numofPeople - 2; i >= 0; i--)
	{
		if (talls[i] >= talls[i + 1])
		{
			while (true)
			{
				prevTallerIdx = i + incCount;

				if (talls[prevTallerIdx] > talls[i])
					break;

				if (prevTallerIdx >= numofPeople - 1)
					break;

				incCount += viewCounts[prevTallerIdx].right;
			}

			viewCounts[i].right = incCount;
			incCount++;
		}
		else if (talls[i] < talls[i + 1])
		{
			viewCounts[i].right = 1;
			incCount = 1;
		}
	}

	/*int viewPairCount = 0;
	for (int i = 0; i < numofPeople; i++)
	{
		for (int j = 1; j <= viewCounts[i].right; j++)
		{
			if (i + j >= numofPeople)
				break;

			if (viewCounts[i + j].left < j)
				continue;

			viewPairCount++;
		}
	}*/

	int viewPairCount = 0;
	for (int i = 0; i < numofPeople; i++)
	{
		for (int j = 1; j <= viewCounts[i].left; j++)
		{
			if (i - j < 0)
				break;

			if (viewCounts[i - j].right < j)
				continue;

			viewPairCount++;
		}
	}

	cout << viewPairCount;

	return 0;
}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct ViewCount
//{
//	int left;
//	int right;
//	ViewCount()
//	{
//		left = 0;
//		right = 0;
//	}
//};
//
//int main()
//{
//	int numofPeople;
//	cin >> numofPeople;
//
//	int* talls = new int[numofPeople];
//	for (int i = 0; i < numofPeople; i++)
//		cin >> talls[i];
//
//	vector<int> tall;
//	for (int i = 0; i < numofPeople; i++)
//	{
//		
//	}
//	ViewCount* viewCounts = new ViewCount[numofPeople];
//
//	return 0;
//}