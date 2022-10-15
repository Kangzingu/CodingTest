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
//};
//struct Virus
//{
//	Pos initPos;
//	Virus() {};
//	Virus(Pos initPos): initPos(initPos) {};
//};
//
//int sizeofRow, sizeofCol;
//int** map;
//vector<Virus> viruses;
//vector<Pos> dirs;
//vector<Pos> nullCells;
//
//int GetSafeCellCount(int** inputMap, vector<Virus> inputViruses)
//{
//	bool** isVisited = new bool* [sizeofRow];
//	int** mapCopy = new int* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		isVisited[i] = new bool[sizeofCol];
//		mapCopy[i] = new int[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			isVisited[i][j] = false;
//			mapCopy[i][j] = inputMap[i][j];
//		}
//	}
//
//	for (int virusCount = 0; virusCount < inputViruses.size(); virusCount++)
//	{
//		queue<Pos> q;
//		q.push(inputViruses[virusCount].initPos);
//		
//		Pos cur;
//		while (true)
//		{
//			if (q.empty() == true)
//				break;
//
//			cur = q.front();
//			q.pop();
//
//			Pos adjustedPos;
//			for (int i = 0; i < dirs.size(); i++)
//			{
//				adjustedPos = cur + dirs[i];
//
//				if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//					adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//					continue;
//				
//				if (isVisited[adjustedPos.row][adjustedPos.col] == true)
//					continue;
//
//				if (mapCopy[adjustedPos.row][adjustedPos.col] != 0)
//					continue;
//
//				mapCopy[adjustedPos.row][adjustedPos.col] = 2;
//				isVisited[adjustedPos.row][adjustedPos.col] = true;
//				q.push(adjustedPos);
//			}
//		}
//	}
//
//	int safeCellCount = 0;
//	for (int i = 0; i < sizeofRow; i++)
//		for (int j = 0; j < sizeofCol; j++)
//			if (mapCopy[i][j] == 0)
//				safeCellCount++;
//
//	for (int i = 0; i < sizeofRow; i++)
//		delete[] isVisited[i];
//	delete[] isVisited;
//
//	return safeCellCount;
//}
//
//void FindMaxSafeCellCount(int& maxSafeCellCount)
//{
//	int safeCellCount;
//
//	for (int i = 0; i < nullCells.size(); i++)
//	{
//		map[nullCells[i].row][nullCells[i].col] = 1;
//		for (int j = i+1; j < nullCells.size(); j++)
//		{
//			map[nullCells[j].row][nullCells[j].col] = 1;
//			for (int k = j+1; k < nullCells.size(); k++)
//			{
//				map[nullCells[k].row][nullCells[k].col] = 1;
//
//				safeCellCount = GetSafeCellCount(map, viruses);
//				if (safeCellCount > maxSafeCellCount)
//					maxSafeCellCount = safeCellCount;
//
//				map[nullCells[k].row][nullCells[k].col] = 0;
//			}
//			map[nullCells[j].row][nullCells[j].col] = 0;
//		}
//		map[nullCells[i].row][nullCells[i].col] = 0;
//	}
//}
//int main()
//{
//	cin >> sizeofRow >> sizeofCol;
//	map = new int* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		map[i] = new int[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			cin >> map[i][j];
//			if (map[i][j] == 2)
//				viruses.push_back(Virus(Pos(i, j)));
//			else if (map[i][j] == 0)
//				nullCells.push_back(Pos(i, j));
//		}
//	}
//
//	dirs.push_back(Pos(-1, 0));
//	dirs.push_back(Pos(0, 1));
//	dirs.push_back(Pos(1, 0));
//	dirs.push_back(Pos(0, -1));
//
//	int maxSafeCellCount;
//	FindMaxSafeCellCount(maxSafeCellCount);
//
//	cout << maxSafeCellCount;
//
//	return 0;
//}