//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Pos
//{
//	int row, col;
//	Pos() {};
//	Pos(int row, int col) :row(row), col(col) {};
//};
//struct NewBlock
//{
//	int type;
//	Pos pos;
//	NewBlock() {};
//	NewBlock(int type, Pos pos) :type(type), pos(pos) {};
//};
//
//bool IsRowFull(bool** map, int sizeofCol, int rowIdx)
//{
//	bool isFull = true;
//	for (int i = 0; i < sizeofCol; i++)
//	{
//		if (map[rowIdx][i] == false)
//		{
//			isFull = false;
//			break;
//		}
//	}
//
//	return isFull;
//}
//
//int GetAdditionalScore(bool** map, int sizeofRow, int sizeofCol, NewBlock newBlock)
//{
//	int score = 0;
//	int lastBlankRowIdx = -1;
//	bool isFillSuccess = false;
//
//	vector<int> filledRows;
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		switch (newBlock.type)
//		{
//		case 1:
//			if (map[i][newBlock.pos.col] == true)
//			{
//				map[lastBlankRowIdx][newBlock.pos.col] = true;
//				isFillSuccess = true;
//				filledRows.push_back(lastBlankRowIdx);
//				break;
//			}
//
//			if (i == sizeofRow - 1)
//			{
//				map[i][newBlock.pos.col] = true;
//				isFillSuccess = true;
//				filledRows.push_back(i);
//				break;
//			}
//
//			lastBlankRowIdx = i;
//			break;
//		case 2:
//			if (map[i][newBlock.pos.col] == true ||
//				map[i][newBlock.pos.col + 1] == true)
//			{
//				map[lastBlankRowIdx][newBlock.pos.col] = true;
//				map[lastBlankRowIdx][newBlock.pos.col + 1] = true;
//				filledRows.push_back(lastBlankRowIdx);
//				isFillSuccess = true;
//				break;
//			}
//
//			if (i == sizeofRow - 1)
//			{
//				map[i][newBlock.pos.col] = true;
//				map[i][newBlock.pos.col + 1] = true;
//				filledRows.push_back(i);
//				isFillSuccess = true;
//				break;
//			}
//
//			lastBlankRowIdx = i;
//			break;
//		case 3:
//			if (map[i][newBlock.pos.col] == true)
//			{
//				map[lastBlankRowIdx - 1][newBlock.pos.col] = true;
//				map[lastBlankRowIdx][newBlock.pos.col] = true;
//				filledRows.push_back(lastBlankRowIdx - 1);
//				filledRows.push_back(lastBlankRowIdx);
//				isFillSuccess = true;
//				break;
//			}
//
//			if (i == sizeofRow - 1)
//			{
//				map[i- 1][newBlock.pos.col] = true;
//				map[i][newBlock.pos.col] = true;
//				filledRows.push_back(i - 1);
//				filledRows.push_back(i);
//				isFillSuccess = true;
//				break;
//			}
//
//			lastBlankRowIdx = i;
//			break;
//		default:
//			cout << "새로 추가된 블럭에 문제가있졍" << endl;
//			break;
//		}
//
//		if (isFillSuccess == true)
//			break;
//	}
//
//	for (int i = 0; i < filledRows.size(); i++)
//	{
//		if (IsRowFull(map, sizeofCol, filledRows[i]) == false)
//			continue;
//
//		for (int j = 0; j < sizeofCol; j++)
//			map[filledRows[i]][j] = false;
//
//		score++;
//
//		for (int j = filledRows[i]-1; j >= 0; j--)
//			for (int k = 0; k < sizeofCol; k++)
//				map[j + 1][k] = map[j][k];
//
//		for (int j = 0; j < sizeofCol; j++)
//			map[0][j] = false;
//	}
//
//	int numofBlockExistSpecialRow = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			if (map[i][j] == true)
//			{
//				numofBlockExistSpecialRow++;
//				break;
//			}
//		}
//	}
//
//	for (int i = sizeofRow - 1 - numofBlockExistSpecialRow; i >= 0; i--)
//		for (int j = 0; j < sizeofCol; j++)
//			map[i + numofBlockExistSpecialRow][j] = map[i][j];
//
//	for (int i = 0; i < numofBlockExistSpecialRow; i++)
//		for (int j = 0; j < sizeofCol; j++)
//			map[i][j] = false;
//
//	return score;
//}
//int main()
//{
//	int sizeofRow, sizeofCol, numofNewBlock;
//	sizeofRow = 6;
//	sizeofCol = 4;
//	cin >> numofNewBlock;
//
//	NewBlock* newBlocks = new NewBlock[numofNewBlock];
//	for (int i = 0; i < numofNewBlock; i++)
//		cin >> newBlocks[i].type >> newBlocks[i].pos.row >> newBlocks[i].pos.col;
//
//	bool** greenMap = new bool* [sizeofRow];
//	bool** blueMap = new bool* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		greenMap[i] = new bool[sizeofCol];
//		blueMap[i] = new bool[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			greenMap[i][j] = false;
//			blueMap[i][j] = false;
//		}
//	}
//	
//	int roundCount = 0;
//	int totalScore = 0;
//	NewBlock curBlock;
//	while (true)
//	{
//		if (roundCount >= numofNewBlock)
//			break;
//
//		curBlock = newBlocks[roundCount];
//
//
//		int blueMapType;
//		if (curBlock.type == 2)
//			blueMapType = 3;
//		else if (curBlock.type == 3)
//			blueMapType = 2;
//		else
//			blueMapType = 1;
//
//		totalScore += GetAdditionalScore(greenMap, sizeofRow, sizeofCol, curBlock);
//		totalScore += GetAdditionalScore(blueMap, sizeofRow, sizeofCol, NewBlock(blueMapType, Pos(curBlock.pos.col, curBlock.pos.row)));
//
//		roundCount++;
//	}
//
//	int restBlockCount = 0;
//	for (int i = 2; i < sizeofRow; i++)
//	{
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			if (greenMap[i][j] == true)
//				restBlockCount++;
//
//			if (blueMap[i][j] == true)
//				restBlockCount++;
//		}
//	}
//	cout << totalScore << endl;
//	cout << restBlockCount;
//
//	return 0;
//}