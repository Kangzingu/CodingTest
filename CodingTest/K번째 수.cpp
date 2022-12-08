#include <iostream>
#include <queue>
using namespace std;

//1 2  3  4  5  6
//2 4  6  8  10 12
//3 6  9  12 15 18
//4 8  12 16 20 24
//5 10 15 20 25 30
//6 12 18 24 30 36

int main()
{
	priority_queue<int, vector<int>, greater<int>> pq;

	int sizeofMap, targetIdx;
	cin >> sizeofMap >> targetIdx;

	for (int i = 0; i < sizeofMap; i++)
		for (int j = 0; j < sizeofMap; j++)
			pq.push((i + 1) * (j + 1));

	for (int i = 0; i < targetIdx - 1; i++)
		pq.pop();
	
	cout << pq.top();

	return 0;
}