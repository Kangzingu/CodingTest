//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Pos
//{
//	int row, col;
//	Pos() {};
//	Pos(int row, int col) : row(row), col(col) {};
//	Pos operator+(Pos pos)
//	{
//		return Pos(row + pos.row, col + pos.col);
//	}
//};
//
//int main()
//{
//	int sizeofRow, sizeofCol;
//	cin >> sizeofRow >> sizeofCol;
//
//	int** map = new int* [sizeofRow];
//	int** dp = new int* [sizeofRow];
//	int* tmpRow = new int[sizeofCol];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		map[i] = new int[sizeofCol];
//		dp[i] = new int[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			cin >> map[i][j];
//			dp[i][j] = -100000000;
//		}
//	}
//
//	for (int i = 0; i < sizeofCol; i++)
//		tmpRow[i] = -100000000;
//
//	vector<Pos> dirs;
//	dirs.push_back(Pos(-1, 0));
//	dirs.push_back(Pos(0, 1));
//	dirs.push_back(Pos(0, -1));
//
//	Pos adjustedPos;
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		if (i == 0)
//		{
//			for (int j = 0; j < sizeofCol; j++)
//			{
//				if (i == 0 && j == 0)
//				{
//					dp[0][0] = map[0][0];
//					continue;
//				}
//
//				for (int k = 0; k < dirs.size(); k++)
//				{
//					adjustedPos = Pos(i, j) + dirs[k];
//
//					if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//						adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//						continue;
//
//					if (dp[adjustedPos.row][adjustedPos.col] + map[i][j] > dp[i][j])
//						dp[i][j] = dp[adjustedPos.row][adjustedPos.col] + map[i][j];
//				}
//			}
//		}
//		else if (0 < i && i < sizeofRow - 1)
//		{
//			for (int j = 0; j < sizeofCol; j++)
//				tmpRow[j] = dp[i][j];
//
//			for (int j = 0; j < sizeofCol; j++)
//			{
//				for (int k = 0; k < dirs.size(); k++)
//				{
//					adjustedPos = Pos(i, j) + dirs[k];
//
//					if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//						adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//						continue;
//					
//					if (adjustedPos.row == i)
//					{
//						if(tmpRow[adjustedPos.col] + map[i][j] > tmpRow[j])
//							tmpRow[j] = tmpRow[adjustedPos.col] + map[i][j];
//					}
//					else
//					{
//						if (dp[adjustedPos.row][adjustedPos.col] + map[i][j] > tmpRow[j])
//							tmpRow[j] = dp[adjustedPos.row][adjustedPos.col] + map[i][j];
//					}
//				}
//			}
//			for (int j = sizeofCol - 1; j >= 0; j--)
//			{
//				for (int k = 0; k < dirs.size(); k++)
//				{
//					adjustedPos = Pos(i, j) + dirs[k];
//
//					if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//						adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//						continue;
//
//					if (dp[adjustedPos.row][adjustedPos.col] + map[i][j] > dp[i][j])
//						dp[i][j] = dp[adjustedPos.row][adjustedPos.col] + map[i][j];
//				}
//			}
//			for (int j = 0; j < sizeofCol; j++)
//				if (tmpRow[j] > dp[i][j])
//					dp[i][j] = tmpRow[j];
//		}
//		else
//		{
//			for (int j = 0; j < sizeofCol; j++)
//			{
//				for (int k = 0; k < dirs.size(); k++)
//				{
//					adjustedPos = Pos(i, j) + dirs[k];
//
//					if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//						adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//						continue;
//
//					if (dp[adjustedPos.row][adjustedPos.col] + map[i][j] > dp[i][j])
//						dp[i][j] = dp[adjustedPos.row][adjustedPos.col] + map[i][j];
//				}
//			}
//		}
//	}
//
//	cout << dp[sizeofRow - 1][sizeofCol - 1];
//
//	return 0;
//}