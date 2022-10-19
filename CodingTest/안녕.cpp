#include <iostream>
using namespace std;

struct Greet
{
	int cost;
	int pleasure;
};
int main()
{
	int numofPeople;
	cin >> numofPeople;

	Greet* greets = new Greet[numofPeople];
	for (int i = 0; i < numofPeople; i++)
		cin >> greets[i].cost;

	for (int i = 0; i < numofPeople; i++)
		cin >> greets[i].pleasure;

	int dp[100];
	int costLimit = 99;
	int maxPleasure = 0;

	for (int i = 0; i < costLimit + 1; i++)
		dp[i] = 0;

	for (int i = 0; i < numofPeople; i++)
	{
		for (int j = costLimit; j >= greets[i].cost; j--)
		{
			if (dp[j - greets[i].cost] + greets[i].pleasure > dp[j])
				dp[j] = dp[j - greets[i].cost] + greets[i].pleasure;

			if (dp[j] > maxPleasure)
				maxPleasure = dp[j];
		}
	}

	cout << maxPleasure;

	return 0;
}