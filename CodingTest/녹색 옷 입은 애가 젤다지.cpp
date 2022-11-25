//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//struct Pos
//{
//	int row, col;
//	Pos() {};
//	Pos(int row, int col) :row(row), col(col) {};
//	Pos operator+(Pos rhs)
//	{
//		return Pos(row + rhs.row, col + rhs.col);
//	}
//};
//
//struct Visit
//{
//	Pos pos;
//	int sumofCost;
//	Visit() {};
//	Visit(Pos pos, int sumofCost) : pos(pos), sumofCost(sumofCost) {};
//};
//
//struct Compare
//{
//	bool operator()(Visit lhs, Visit rhs)
//	{
//		if (lhs.sumofCost > rhs.sumofCost)
//			return true;
//
//		return false;
//	}
//};
//
//int main()
//{
//	int maxSizeofMap = 125;
//
//	int** map = new int* [maxSizeofMap];
//	bool** isVisited = new bool* [maxSizeofMap];
//
//	for (int i = 0; i < maxSizeofMap; i++)
//	{
//		map[i] = new int[maxSizeofMap];
//		isVisited[i] = new bool[maxSizeofMap];
//
//		for (int j = 0; j < maxSizeofMap; j++)
//			isVisited[i][j] = false;
//	}
//
//	int caseCount = 0;
//	while (true)
//	{
//		int sizeofRow, sizeofCol;
//		cin >> sizeofRow;
//
//		if (sizeofRow == 0)
//			break;
//
//		sizeofCol = sizeofRow;
//
//		for (int i = 0; i < sizeofRow; i++)
//		{
//			for (int j = 0; j < sizeofCol; j++)
//			{
//				cin >> map[i][j];
//				isVisited[i][j] = false;
//			}
//		}
//
//		vector<Pos> dirs;
//		dirs.push_back(Pos(-1, 0));
//		dirs.push_back(Pos(0, 1));
//		dirs.push_back(Pos(1, 0));
//		dirs.push_back(Pos(0, -1));
//
//		priority_queue<Visit, vector<Visit>, Compare> q;
//
//		q.push(Visit(Pos(0, 0), map[0][0]));
//
//		Visit cur;
//		while (true)
//		{
//			if (q.empty() == true)
//				break;
//
//			cur = q.top();
//			q.pop();
//			isVisited[cur.pos.row][cur.pos.col] = true;
//			cout << "현재 Pos: (" << cur.pos.row << ", " << cur.pos.col << "), 비용: " << cur.sumofCost << endl;
//
//			if (cur.pos.row == sizeofRow - 1 && cur.pos.col == sizeofCol - 1)
//			{
//				cout << "Problem " << caseCount + 1 << ": " << cur.sumofCost << endl;
//				break;
//			}
//
//			Pos adjustedPos;
//			for (int i = 0; i < dirs.size(); i++)
//			{
//				adjustedPos = cur.pos + dirs[i];
//
//				if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//					adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//					continue;
//
//				if (isVisited[adjustedPos.row][adjustedPos.col] == true)
//					continue;
//
//				q.push(Visit(adjustedPos, cur.sumofCost + map[adjustedPos.row][adjustedPos.col]));
//			}
//		}
//
//		caseCount++;
//	}
//
//	return 0;
//}