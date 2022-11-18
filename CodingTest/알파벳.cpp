//#include <iostream>
//#include <map>
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
//void DFS(char** map, bool** isVisited, int sizeofRow, int sizeofCol, std::map<char, bool>& isAlphabetVisited, Pos cur, int curVisitCount, int& maxofVisitCount, vector<Pos>& dirs)
//{
//	isVisited[cur.row][cur.col] = true;
//	isAlphabetVisited[map[cur.row][cur.col]] = true;
//	curVisitCount++;
//
//	if (curVisitCount > maxofVisitCount)
//		maxofVisitCount = curVisitCount;
//
//	Pos adjustedPos;
//	for (int i = 0; i < dirs.size(); i++)
//	{
//		adjustedPos = cur + dirs[i];
//
//		if (adjustedPos.row < 0 || adjustedPos.row >= sizeofRow ||
//			adjustedPos.col < 0 || adjustedPos.col >= sizeofCol)
//			continue;
//
//		if (isVisited[adjustedPos.row][adjustedPos.col] == true)
//			continue;
//
//		if (isAlphabetVisited[map[adjustedPos.row][adjustedPos.col]] == true)
//			continue;
//
//		DFS(map, isVisited, sizeofRow, sizeofCol, isAlphabetVisited, adjustedPos, curVisitCount, maxofVisitCount, dirs);
//	}
//
//	isAlphabetVisited[map[cur.row][cur.col]] = false;
//	isVisited[cur.row][cur.col] = false;
//}
//
//int main()
//{
//	int sizeofRow, sizeofCol;
//	cin >> sizeofRow >> sizeofCol;
//
//	char** map = new char* [sizeofRow];
//	bool** isVisited = new bool* [sizeofRow];
//	for (int i = 0; i < sizeofRow; i++)
//	{
//		map[i] = new char[sizeofCol];
//		isVisited[i] = new bool[sizeofCol];
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			cin >> map[i][j];
//			isVisited[i][j] = false;
//		}
//	}
//
//	std::map<char, bool> isAlphabetVisited;
//
//	vector<Pos> dirs;
//	dirs.push_back(Pos(-1, 0));
//	dirs.push_back(Pos(0, 1));
//	dirs.push_back(Pos(1, 0));
//	dirs.push_back(Pos(0, -1));
//
//	int maxofVisitCount = 0;
//	DFS(map, isVisited, sizeofRow, sizeofCol, isAlphabetVisited, Pos(0, 0), 0, maxofVisitCount, dirs);
//
//	cout << maxofVisitCount;
//
//	return 0;
//}