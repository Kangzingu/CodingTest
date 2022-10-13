//#include <iostream>
//#include <vector>
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
//
//struct CCTV
//{
//	int type;
//	int dir = 0;
//	Pos pos;
//};
//
//int** map;
//vector<CCTV> cctvs;
//int sizeofRow, sizeofCol;
//
//Pos DirToPos(int dir)
//{
//	switch (dir)
//	{
//	case 0:
//		return Pos(-1, 0);
//	case 1:
//		return Pos(0, 1);
//	case 2:
//		return Pos(1, 0);
//	case 3:
//		return Pos(0, -1);
//	}
//}
//
//void LookForward(int** mapCopy, Pos cur, int dir)
//{
//	Pos adjustAmount = DirToPos(dir);
//	Pos adjustedPos = cur + adjustAmount;
//	while (true)
//	{
//		if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//			adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//			break;
//
//		if (mapCopy[adjustedPos.row][adjustedPos.col] == 6)
//			break;
//
//		mapCopy[adjustedPos.row][adjustedPos.col] = 7;
//		adjustedPos = adjustedPos + adjustAmount;
//	}
//}
//int GetInvisibleCellCount(vector<CCTV>& cctvsCopy)
//{
//	int** mapCopy = new int* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		mapCopy[i] = new int[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//			mapCopy[i][j] = map[i][j];
//	}
//
//	Pos cur, adjustedPos;
//	for (int i = 0; i < cctvsCopy.size(); i++)
//	{
//		cur = cctvsCopy[i].pos;
//		switch (cctvsCopy[i].type)
//		{
//		case 1:
//			LookForward(mapCopy, cur, cctvsCopy[i].dir);
//			break;
//		case 2:
//			LookForward(mapCopy, cur, cctvsCopy[i].dir);
//			LookForward(mapCopy, cur, (cctvsCopy[i].dir + 2) % 4);
//			break;
//		case 3:
//			LookForward(mapCopy, cur, cctvsCopy[i].dir);
//			LookForward(mapCopy, cur, (cctvsCopy[i].dir + 1) % 4);
//			break;
//		case 4:
//			LookForward(mapCopy, cur, (cctvsCopy[i].dir + 3) % 4);
//			LookForward(mapCopy, cur, cctvsCopy[i].dir);
//			LookForward(mapCopy, cur, (cctvsCopy[i].dir + 1) % 4);
//			break;
//		case 5:
//			LookForward(mapCopy, cur, cctvsCopy[i].dir);
//			LookForward(mapCopy, cur, (cctvsCopy[i].dir + 1) % 4);
//			LookForward(mapCopy, cur, (cctvsCopy[i].dir + 2) % 4);
//			LookForward(mapCopy, cur, (cctvsCopy[i].dir + 3) % 4);
//			break;
//		}
//	}
//
//	int invisibleCellCount = 0;
//	for (int i = 0; i < sizeofRow; i++)
//		for (int j = 0; j < sizeofCol; j++)
//			if (mapCopy[i][j] == 0)
//				invisibleCellCount++;
//
//	for (int i = 0; i < sizeofRow; i++)
//		delete[] mapCopy[i];
//	delete[] mapCopy;
//
//	return invisibleCellCount;
//}
//
//void FindLeastInvisibleCellCount(vector<CCTV> cctvsCopy, int curCCTVIdx, vector<int>& numofDir, int& minInvisibleCellCount)
//{
//	if (curCCTVIdx == -1)
//	{
//		minInvisibleCellCount = GetInvisibleCellCount(cctvsCopy);
//		return;
//	}
//
//	if (curCCTVIdx == 0)
//	{
//		for (int i = 0; i < numofDir[cctvsCopy[curCCTVIdx].type - 1]; i++)
//		{
//			cctvsCopy[curCCTVIdx].dir = (cctvsCopy[curCCTVIdx].dir + 1) % 4;
//			//cout << curCCTVIdx << " 번째 CCTV 방향: " << cctvsCopy[curCCTVIdx].dir << endl;
//			int invisibleCellCount = GetInvisibleCellCount(cctvsCopy);
//			if (invisibleCellCount < minInvisibleCellCount)
//				minInvisibleCellCount = invisibleCellCount;
//		}
//		return;
//	}
//	for (int i = 0; i < numofDir[cctvsCopy[curCCTVIdx].type - 1]; i++)
//	{
//		//cout << curCCTVIdx << " 번째 CCTV 방향: " << cctvsCopy[curCCTVIdx].dir << endl;
//		cctvsCopy[curCCTVIdx].dir = (cctvsCopy[curCCTVIdx].dir + 1) % 4;
//		FindLeastInvisibleCellCount(cctvsCopy, curCCTVIdx - 1, numofDir, minInvisibleCellCount);
//	}
//}
//
//int main()
//{
//	cin >> sizeofRow >> sizeofCol;
//
//	CCTV cctv;
//	map = new int* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		map[i] = new int[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			cin >> map[i][j];
//
//			if (map[i][j] == 0 || map[i][j] == 6)
//				continue;
//
//			cctv.type = map[i][j];
//			cctv.pos = { i, j };
//
//			cctvs.push_back(cctv);
//		}
//	}
//
//	vector<int> numofDir;
//	numofDir.push_back(4);
//	numofDir.push_back(2);
//	numofDir.push_back(4);
//	numofDir.push_back(4);
//	numofDir.push_back(1);
//
//	int minInvisibleCellCount = sizeofRow * sizeofCol;
//
//	FindLeastInvisibleCellCount(cctvs, cctvs.size() - 1, numofDir, minInvisibleCellCount);
//
//	cout << minInvisibleCellCount;
//	return 0;
//}