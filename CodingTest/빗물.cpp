//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int sizeofRow, sizeofCol;
//	cin >> sizeofRow >> sizeofCol;
//
//	int* heights = new int[sizeofCol];
//	for (int i = 0; i < sizeofCol; i++)
//		cin >> heights[i];
//
//	int rainAmount = 0;
//	int startCol;
//	for (int i = sizeofRow - 1; i >= 0; i--)
//	{
//		startCol = -1;
//		for (int j = 0; j < sizeofCol; j++)
//		{
//			if (i > heights[j] - 1)
//				continue;
//
//			if (startCol == -1)
//			{
//				startCol = j;
//				continue;
//			}
//
//			rainAmount += j - startCol - 1;
//			startCol = j;
//		}
//	}
//
//	cout << rainAmount;
//	
//	return 0;
//}