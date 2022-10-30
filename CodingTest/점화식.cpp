#include <iostream>
using namespace std;

int targetNum;
unsigned long long* dp;

unsigned long long DP(int num)
{
	if (dp[num] != -1)
		return dp[num];

	unsigned long long sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += DP(num - i - 1) * DP(i);
	}

	return dp[num] = sum;
}

int main()
{
	cin >> targetNum;
	
	dp = new unsigned long long[targetNum + 1];
	for (int i = 0; i < targetNum + 1; i++)
		dp[i] = -1;
	dp[0] = 1;
	
	cout << DP(targetNum);
	
	return 0;
}