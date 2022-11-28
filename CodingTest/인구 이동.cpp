#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Pos
{
	int row, col;
	Pos() {};
	Pos(int row, int col) :row(row), col(col) {};
	Pos operator+(Pos rhs)
	{
		return Pos(row + rhs.row, col + rhs.col);
	}
};

struct UnionAdjustData
{
	int src;
	int dest;
	UnionAdjustData() {};
	UnionAdjustData(int src, int dest) :src(src), dest(dest) {};
};

struct UnionData
{
	int totalPop = 0;
	int avgPop = 0;
	int countyCount = 0;
};

int main()
{
	int sizeofRow, sizeofCol, minofPopDiff, maxofPopDiff;
	cin >> sizeofRow >> minofPopDiff >> maxofPopDiff;
	sizeofCol = sizeofRow;

	int** map = new int* [sizeofRow];
	int** unionMap = new int* [sizeofRow];
	UnionData* unionData = new UnionData[sizeofRow * sizeofCol + 1];

	for (int i = 0; i < sizeofRow; i++)
	{
		map[i] = new int[sizeofCol];
		unionMap[i] = new int[sizeofCol];
		for (int j = 0; j < sizeofCol; j++)
		{
			cin >> map[i][j];
			unionMap[i][j] = 0;
		}
	}

	vector<Pos> dirs;
	dirs.push_back(Pos(-1, 0));
	dirs.push_back(Pos(0, -1));
	Pos adjustedPos;
	int popDiff;
	int uniteCount;
	int unionCount;
	int minUnion;
	int curSrc;


	int moveCount = 0;
	while (true)
	{
		vector<UnionAdjustData> unionList;
		unionCount = 0;

		for (int i = 0; i < sizeofRow; i++)
		{
			for (int j = 0; j < sizeofCol; j++)
			{
				unionMap[i][j] = 0;

				uniteCount = 0;
				for (int k = 0; k < dirs.size(); k++)
				{
					adjustedPos = Pos(i, j) + dirs[k];

					if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
						adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
						continue;

					popDiff = abs(map[i][j] - map[adjustedPos.row][adjustedPos.col]);

					if (minofPopDiff <= popDiff && popDiff <= maxofPopDiff)
					{
						unionMap[i][j] = unionMap[adjustedPos.row][adjustedPos.col];
						uniteCount++;
					}
				}

				int up;
				int minUp;
				int left;
				int minLeft;
				switch (uniteCount)
				{
					case 0:
						unionList.push_back(UnionAdjustData(unionCount, unionCount));
						unionMap[i][j] = unionCount;
						unionCount++;
						break;
					case 1:
						break;
					case 2:
						up = unionMap[i - 1][j];
						minUp;
						left = unionMap[i][j - 1];
						minLeft;

						curSrc = unionList[up].src;
						while (true)
						{
							if (unionList[curSrc].src == unionList[curSrc].dest)
							{
								minUp = unionList[curSrc].dest;
								break;
							}

							curSrc = unionList[curSrc].dest;
						}

						curSrc = unionList[left].src;
						while (true)
						{
							if (unionList[curSrc].src == unionList[curSrc].dest)
							{
								minLeft = unionList[curSrc].dest;
								break;
							}

							curSrc = unionList[curSrc].dest;
						}

						if (minUp < minLeft)
						{
							if (unionList[unionMap[i][j - 1]].src == unionList[unionMap[i][j - 1]].dest)
							{
								unionList[unionMap[i][j - 1]].dest = minUp;
								break;
							}

							curSrc = unionList[unionMap[i][j - 1]].dest;
							while (true)
							{
								if (unionList[curSrc].src == unionList[curSrc].dest)
								{
									unionList[curSrc].dest = minUp;
									break;
								}

								unionList[curSrc].dest = minUp;
								curSrc = unionList[curSrc].dest;
							}
						}
						else
						{
							if (unionList[unionMap[i - 1][j]].src == unionList[unionMap[i - 1][j]].dest)
							{
								unionList[unionMap[i - 1][j]].dest = minLeft;
								break;
							}

							curSrc = unionList[unionMap[i - 1][j]].dest;
							while (true)
							{
								if (unionList[curSrc].src == unionList[curSrc].dest)
								{
									unionList[curSrc].dest = minLeft;
									break;
								}

								unionList[curSrc].dest = minLeft;
								curSrc = unionList[curSrc].dest;
							}
						}
						break;
					default:
						break;
				}
			}
		}

		for (int i = 0; i < unionList.size(); i++)
		{
			if (unionList[i].src == unionList[i].dest)
				continue;

			curSrc = unionList[i].dest;
			while (true)
			{
				if (unionList[curSrc].src == unionList[curSrc].dest)
				{
					unionList[i].dest = unionList[curSrc].dest;
					break;
				}

				curSrc = unionList[curSrc].dest;
			}
		}

		int realUnionCount = 0;
		for (int i = 0; i < unionList.size(); i++)
			if (unionList[i].src == unionList[i].dest)
				realUnionCount++;

		if (realUnionCount == sizeofRow * sizeofCol)
			break;

		for (int i = 0; i < unionList.size(); i++)
		{
			unionData[i].totalPop = 0;
			unionData[i].avgPop = 0;
			unionData[i].countyCount = 0;
		}

		for (int i = 0; i < sizeofRow; i++)
		{
			for (int j = 0; j < sizeofCol; j++)
			{
				unionData[unionList[unionMap[i][j]].dest].totalPop += map[i][j];
				unionData[unionList[unionMap[i][j]].dest].countyCount++;
			}
		}

		for (int i = 0; i < unionList.size(); i++)
		{
			if (unionData[i].countyCount == 0)
				continue;

			unionData[i].avgPop = unionData[i].totalPop / unionData[i].countyCount;
		}

		for (int i = 0; i < sizeofRow; i++)
			for (int j = 0; j < sizeofCol; j++)
				map[i][j] = unionData[unionList[unionMap[i][j]].dest].avgPop;

		moveCount++;
	}

	cout << moveCount;

	return 0;
}