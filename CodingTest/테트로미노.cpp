//#include <iostream>
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
//int sizeofRow, sizeofCol;
//int** map;
//int numofDir = 4;
//
//void DFS4Cells(Pos cur, int prevDir, int iter, int tetSum, int& maxTetSum)
//{
//	if (cur.row < 0 || cur.row >= sizeofRow ||
//		cur.col < 0 || cur.col >= sizeofCol)
//		return;
//
//	tetSum += map[cur.row][cur.col];
//	if (iter == 4)
//	{
//		if (tetSum > maxTetSum)
//			maxTetSum = tetSum;
//
//		return;
//	}
//
//	for (int i = 0; i < numofDir; i++)
//	{
//		if ((i + 2) % 4 == prevDir)
//			continue;
//
//		DFS4Cells(cur + DirToPos(i), i, iter + 1, tetSum, maxTetSum);
//	}
//}
//void FindMinTetromino(int& maxTetSum)
//{
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			DFS4Cells(Pos(i, j), -1, 1, 0, maxTetSum);
//
//			// 빠큐모양 확인
//			for (int k = 0; k < numofDir; k++)
//			{
//				int tetSum = map[i][j];
//				Pos adjustedPos;
//				for (int l = 0; l < numofDir; l++)
//				{
//					if (l == 0)
//						continue;
//
//					adjustedPos = Pos(i, j) + DirToPos((k + l) % 4);
//
//					if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//						adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//						break;
//
//					tetSum += map[adjustedPos.row][adjustedPos.col];
//				}
//
//				if (tetSum > maxTetSum)
//					maxTetSum = tetSum;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> sizeofRow >> sizeofCol;
//
//	map = new int* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		map[i] = new int[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//			cin >> map[i][j];
//	}
//
//	int maxTetSum = 0;
//	FindMinTetromino(maxTetSum);
//
//	cout << maxTetSum;
//
//	return 0;
//}