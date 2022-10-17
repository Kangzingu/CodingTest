#include <iostream>
using namespace std;

int main()
{
	// idx byte를 위해 필요한 cost
	unsigned int numofApp, requiredBytes;
	cin >> numofApp >> requiredBytes;
	
	unsigned int* dp = new unsigned int[requiredBytes + 1];
	for (int i = 0; i < requiredBytes + 1; i++)
		dp[i] = 1000000000;

	unsigned int* usingBytes = new unsigned int[numofApp];
	unsigned int* unactiveCosts = new unsigned int[numofApp];
	for (int i = 0; i < numofApp; i++)
		cin >> usingBytes[i];

	for (int i = 0; i < numofApp; i++)
		cin >> unactiveCosts[i];

	for (int i = 0; i < numofApp; i++)
	{
		for (int j = requiredBytes; j >= usingBytes[i] + 1; j--)
			if (dp[j - usingBytes[i]] + unactiveCosts[i] < dp[j])
				dp[j] = dp[j - usingBytes[i]] + unactiveCosts[i];

		for (int j = min(requiredBytes, usingBytes[i]); j >= 0; j--)
			if (unactiveCosts[i] < dp[j])
				dp[j] = unactiveCosts[i];

	}

	cout << dp[requiredBytes];

	return 0;
}