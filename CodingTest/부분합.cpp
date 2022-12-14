#include <iostream>
using namespace std;

#define INF 100001
struct SubSum
{
	int val;
	int count;
};

int main()
{
	int numofNum, targetMinSumVal;
	cin >> numofNum >> targetMinSumVal;

	int* nums = new int[numofNum];
	SubSum subSum;
	subSum.val = 0;
	subSum.count = 0;
	int targetMinSumCount = INF;
	int frontOffset = 0;
	for (int i = 0; i < numofNum; i++)
	{
		cin >> nums[i];
		subSum.val += nums[i];
		subSum.count++;

		while (true)
		{
			if (subSum.val < targetMinSumVal)
				break;

			if (subSum.count < targetMinSumCount)
				targetMinSumCount = subSum.count;

			subSum.val -= nums[frontOffset];
			subSum.count--;
			frontOffset++;
		}
	}

	if (targetMinSumCount == INF)
		cout << 0;
	else
		cout << targetMinSumCount;

	return 0;
}