//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#define INF 1000001
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
//struct Cell
//{
//	Pos pos;
//	int dist;
//	Cell() {};
//	Cell(Pos pos, int dist) :pos(pos), dist(dist) {};
//};
//
//struct CompareCell
//{
//	bool operator()(Cell lhs, Cell rhs)
//	{
//		if (lhs.dist > rhs.dist)
//			return true;
//
//		return false;
//	}
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int sizeofRow, sizeofCol;
//	cin >> sizeofRow >> sizeofCol;
//
//	int** map = new int* [sizeofRow];
//	int** minDist = new int* [sizeofRow];
//	bool** isVisited = new bool* [sizeofRow];
//	Pos startPos;
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		map[i] = new int[sizeofCol];
//		minDist[i] = new int[sizeofCol];
//		isVisited[i] = new bool[sizeofCol];
//
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			cin >> map[i][j];
//
//			if (map[i][j] == 2)
//				startPos = Pos(i, j);
//
//			minDist[i][j] = INF;
//			isVisited[i][j] = false;
//		}
//	}
//
//	vector<Pos> dirs;
//	dirs.push_back(Pos(-1, 0));
//	dirs.push_back(Pos(0, 1));
//	dirs.push_back(Pos(1, 0));
//	dirs.push_back(Pos(0, -1));
//
//	priority_queue<Cell, vector<Cell>, CompareCell> q;
//	q.push(Cell(startPos, 0));
//	minDist[startPos.row][startPos.col] = 0;
//
//	Cell cur;
//	Pos adjustedPos;
//	while (true)
//	{
//		while (true)
//		{
//			if (q.empty() == true)
//			{
//				for (int i = 0; i < sizeofRow; i++)
//				{
//					for (int j = 0; j < sizeofCol; j++)
//					{
//						if (minDist[i][j] != INF)
//							cout << minDist[i][j] << " ";
//						else
//						{
//							if (map[i][j] == 0)
//								cout << 0 << " ";
//							else
//								cout << -1 << " ";
//						}
//					}
//					cout << "\n";
//				}
//
//				return 0;
//			}
//
//			cur = q.top();
//			q.pop();
//
//			if (isVisited[cur.pos.row][cur.pos.col] == true)
//				continue;
//
//			isVisited[cur.pos.row][cur.pos.col] = true;
//			break;
//		}
//
//		for (int i = 0; i < dirs.size(); i++)
//		{
//			adjustedPos = cur.pos + dirs[i];
//
//			if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//				adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//				continue;
//
//			if (map[adjustedPos.row][adjustedPos.col] == 0)
//				continue;
//
//			if (cur.dist + 1 >= minDist[adjustedPos.row][adjustedPos.col])
//				continue;
//
//			minDist[adjustedPos.row][adjustedPos.col] = cur.dist + 1;
//
//			if (isVisited[adjustedPos.row][adjustedPos.col] == true)
//				continue;
//
//			q.push(Cell(adjustedPos, minDist[adjustedPos.row][adjustedPos.col]));
//		}
//	}
//
//	return 0;
//}