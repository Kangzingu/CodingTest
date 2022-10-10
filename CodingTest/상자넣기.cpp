#include <iostream>
using namespace std;

int main()
{
	int numofBox;
	cin >> numofBox;
	int* dp = new int[numofBox];
	int* sizeofBoxs = new int[numofBox];

	for (int i = 0; i < numofBox; i++)
	{
		cin >> sizeofBoxs[i];
		dp[i] = 1;
	}

	for (int i = 0; i < numofBox; i++)
	{
		for (int j = i + 1; j < numofBox; j++)
		{
			if (sizeofBoxs[i] >= sizeofBoxs[j])
				continue;

			if (dp[i] + 1 < dp[j])
				continue;

			dp[j] = dp[i] + 1;
		}
	}

	int maxofBoxCount = 0;
	for (int i = 0; i < numofBox; i++)
		if (dp[i] > maxofBoxCount)
			maxofBoxCount = dp[i];

	cout << maxofBoxCount;
	return 0;
}