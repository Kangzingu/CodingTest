#include <iostream>
#include <map>
using namespace std;

int main()
{
	int numofSushi, sortofSushi, numofContEatPlate, couponNum;
	cin >> numofSushi >> sortofSushi >> numofContEatPlate >> couponNum;

	map<int, int> sushiMap;
	int* sushies = new int[numofSushi];
	int sushiNum;
	for (int i = 0; i < numofSushi; i++)
	{
		cin >> sushiNum;
		sushies[i] = sushiNum;

		if (i >= numofContEatPlate)
			continue;

		sushiMap[sushiNum]++;
	}
	sushiMap[couponNum]++;

	int* dp = new int[numofSushi];
	int maxSortofContEatPlate = 0;
	for (int i = 0; i < numofSushi; i++)
	{
		dp[i] = sushiMap.size();
		if (dp[i] > maxSortofContEatPlate)
			maxSortofContEatPlate = dp[i];

		sushiMap[sushies[i]]--;
		if (sushiMap[sushies[i]] <= 0)
			sushiMap.erase(sushies[i]);

		sushiMap[sushies[(i + numofContEatPlate) % numofSushi]]++;
	}
	
	cout << maxSortofContEatPlate;

	return 0;
}