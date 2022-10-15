//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct Pos
//{
//	int row, col;
//	Pos() {};
//	Pos(int row, int col) : row(row), col(col) {};
//	Pos operator+(Pos rhs)
//	{
//		return Pos(row + rhs.row, col + rhs.col);
//	}
//	bool operator==(Pos rhs)
//	{
//		if (row == rhs.row && col == rhs.col)
//			return true;
//
//		return false;
//	}
//};
//
//struct Shark
//{
//	Pos pos;
//	int size = 2;
//	int exp = 0;
//};
//
//struct Fish
//{
//	Pos pos;
//	int size;
//	Fish() {};
//	Fish(Pos pos, int size) :pos(pos), size(size) {};
//};
//
//int sizeofRow, sizeofCol;
//vector<Fish> fishes;
//Shark shark;
//vector<pair<Fish, int>> eatableFishesWithIdx;
//vector<Pos> dirs;
//int** map;
//
//int EatFish(int fishIdx)
//{
//	queue<pair<Pos, int>> q;
//	bool** isVisited = new bool* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		isVisited[i] = new bool[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//			isVisited[i][j] = false;
//	}
//
//	q.push(make_pair(shark.pos, 0));
//	Pos cur;
//	int dist;
//	bool isSuccess = false;
//	while (true)
//	{
//		if (q.empty() == true)
//			break;
//
//		cur = q.front().first;
//		dist = q.front().second;
//		q.pop();
//
//		if (cur.row == fishes[fishIdx].pos.row &&
//			cur.col == fishes[fishIdx].pos.col)
//		{
//			isSuccess = true;
//			break;
//		}
//
//		Pos adjustedPos;
//		for (int i = 0; i < dirs.size(); i++)
//		{
//			adjustedPos = cur + dirs[i];
//			if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//				adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//				continue;
//
//			if (isVisited[adjustedPos.row][adjustedPos.col] == true)
//				continue;
//
//			if (map[adjustedPos.row][adjustedPos.col] > shark.size)
//				continue;
//
//			q.push(make_pair(adjustedPos, dist + 1));
//			isVisited[adjustedPos.row][adjustedPos.col] = true;
//		}
//	}
//
//	for (int i = 0; i < sizeofRow; i++)
//		delete[] isVisited[i];
//	delete[] isVisited;
//
//	if (isSuccess == true)
//		return dist;
//	else
//		return -1;
//}
//
//int EatNearestFish(Pos& eatenFishPos)
//{
//	queue<pair<Pos, int>> q;
//	bool** isVisited = new bool* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		isVisited[i] = new bool[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//			isVisited[i][j] = false;
//	}
//
//	q.push(make_pair(shark.pos, 0));
//	Pos cur;
//	int dist;
//	int eatenFishDist;
//	bool isSuccess = false;
//	while (true)
//	{
//		if (q.empty() == true)
//			break;
//
//		cur = q.front().first;
//		dist = q.front().second;
//		q.pop();
//
//		if (map[cur.row][cur.col] < shark.size &&
//			1 <= map[cur.row][cur.col] && map[cur.row][cur.col] <= 6)
//		{
//			if (isSuccess == true)
//			{
//				if (dist > eatenFishDist)
//					break;
//
//				if (cur.row > eatenFishPos.row)
//					continue;
//
//				if (cur.row == eatenFishPos.row && cur.col > eatenFishPos.col)
//					continue;
//
//				eatenFishPos = cur;
//				continue;
//			}
//
//			eatenFishPos = cur;
//			eatenFishDist = dist;
//			isSuccess = true;
//		}
//
//		Pos adjustedPos;
//		for (int i = 0; i < dirs.size(); i++)
//		{
//			adjustedPos = cur + dirs[i];
//			if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//				adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//				continue;
//
//			if (isVisited[adjustedPos.row][adjustedPos.col] == true)
//				continue;
//
//			if (map[adjustedPos.row][adjustedPos.col] > shark.size)
//				continue;
//
//			q.push(make_pair(adjustedPos, dist + 1));
//			isVisited[adjustedPos.row][adjustedPos.col] = true;
//		}
//	}
//
//	for (int i = 0; i < sizeofRow; i++)
//		delete[] isVisited[i];
//	delete[] isVisited;
//
//	if (isSuccess == true)
//		return eatenFishDist;
//	else
//		return -1;
//}
//int main()
//{
//	cin >> sizeofRow;
//	sizeofCol = sizeofRow;
//
//	dirs.push_back(Pos(-1, 0));
//	dirs.push_back(Pos(0, -1));
//	dirs.push_back(Pos(0, 1));
//	dirs.push_back(Pos(1, 0));
//
//	map = new int* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		map[i] = new int[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			cin >> map[i][j];
//			if (1 <= map[i][j] && map[i][j] <= 6)
//				fishes.push_back(Fish(Pos(i, j), map[i][j]));
//			else if (map[i][j] == 9)
//				shark.pos = Pos(i, j);
//		}
//	}
//
//	int totalTimeCount = 0;
//	while (true)
//	{
//		eatableFishesWithIdx.clear();
//		for (int i = 0; i < fishes.size(); i++)
//		{
//			if (fishes[i].size >= shark.size)
//				continue;
//
//			eatableFishesWithIdx.push_back(make_pair(fishes[i], i));
//		}
//
//		if (eatableFishesWithIdx.empty() == true)
//			break;
//
//		if (eatableFishesWithIdx.size() == 1)
//		{
//			int timeCount = EatFish(eatableFishesWithIdx[0].second);
//
//			if (timeCount == -1)
//				break;
//
//			shark.exp++;
//			
//			if (shark.exp >= shark.size)
//			{
//				shark.exp -= shark.size;
//				shark.size++;
//			}
//
//			map[eatableFishesWithIdx[0].first.pos.row][eatableFishesWithIdx[0].first.pos.col] = 9;
//			map[shark.pos.row][shark.pos.col] = 0;
//			shark.pos = eatableFishesWithIdx[0].first.pos;
//			fishes.erase(fishes.begin() + eatableFishesWithIdx[0].second);
//			
//			totalTimeCount += timeCount;
//		}
//		else
//		{
//			Pos eatenFishPos;
//			int timeCount = EatNearestFish(eatenFishPos);
//
//			if (timeCount == -1)
//				break;
//
//			shark.exp++;
//
//			if (shark.exp >= shark.size)
//			{
//				shark.exp -= shark.size;
//				shark.size++;
//			}
//
//			map[eatenFishPos.row][eatenFishPos.col] = 9;
//			map[shark.pos.row][shark.pos.col] = 0;
//			shark.pos = eatenFishPos;
//
//			for (int i = 0; i < fishes.size(); i++)
//				if (fishes[i].pos == eatenFishPos)
//					fishes.erase(fishes.begin() + i);
//
//			totalTimeCount += timeCount;
//		}
//	}
//
//	cout << totalTimeCount;
//
//	return 0;
//}