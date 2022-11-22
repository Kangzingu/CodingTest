//#include <iostream>
//using namespace std;
//
//struct Pos
//{
//	int row, col;
//	Pos() {};
//	Pos(int row, int col) :row(row), col(col) {};
//};
//
//struct Star
//{
//	Pos pos;
//};
//int main()
//{
//	int sizeofCol, sizeofRow, sizeofTrampoline, numofStar;
//	cin >> sizeofCol >> sizeofRow >> sizeofTrampoline >> numofStar;
//
//	Star* stars = new Star[numofStar];
//	for (int i = 0; i < numofStar; i++)
//		cin >> stars[i].pos.col >> stars[i].pos.row;
//
//	Pos trampolineStartPos;
//	int minofUnstoppableStarCount = numofStar;
//	for (int i = 0; i < numofStar; i++)
//	{
//		for (int j = 0; j < numofStar; j++)
//		{
//			trampolineStartPos.row = stars[i].pos.row;
//			trampolineStartPos.col = stars[j].pos.col;
//
//			int unstoppableStarCount = 0;
//			for (int k = 0; k < numofStar; k++)
//			{
//				if (stars[k].pos.row < trampolineStartPos.row || stars[k].pos.row > trampolineStartPos.row + sizeofTrampoline ||
//					stars[k].pos.col < trampolineStartPos.col || stars[k].pos.col > trampolineStartPos.col + sizeofTrampoline)
//					unstoppableStarCount++;
//			}
//			
//			if (unstoppableStarCount < minofUnstoppableStarCount)
//				minofUnstoppableStarCount = unstoppableStarCount;
//		}
//	}
//
//	cout << minofUnstoppableStarCount;
//
//	return 0;
//}