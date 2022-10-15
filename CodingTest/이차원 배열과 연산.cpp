//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Num
//{
//	int num = 0;
//	int count = 0;
//	Num()
//	{
//		num = 0;
//		count = 0;
//	}
//	void Init()
//	{
//		num = 0;
//		count = 0;
//	}
//};
//
//bool Compare(Num n1, Num n2)
//{
//	if (n1.count < n2.count)
//		return true;
//	else if (n1.count == n2.count)
//	{
//		if (n1.num < n2.num)
//			return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	int sizeofRow = 3;
//	int sizeofCol = 3;
//	int targetRow, targetCol, targetVal;
//	cin >> targetRow >> targetCol >> targetVal;
//	targetRow--; targetCol--;
//
//	int map[100][100];
//
//	for (int i = 0; i < 100; i++)
//		for (int j = 0; j < 100; j++)
//			map[i][j] = 0;
//
//	for (int i = 0; i < sizeofRow; i++)
//		for (int j = 0; j < sizeofCol; j++)
//			cin >> map[i][j];
//
//	Num numsArr[100];
//
//	int timeCount = 0;
//	while (true)
//	{
//		if (map[targetRow][targetCol] == targetVal)
//		{
//			cout << timeCount;
//			break;
//		}
//
//		if (timeCount >= 100)
//		{
//			cout << -1;
//			break;
//		}
//		int maxSizeofRow = 0;
//		int maxSizeofCol = 0;
//		if (sizeofRow >= sizeofCol)
//		{
//			// 행에 대한 정렬
//			for (int i = 0; i < sizeofRow; i++)
//			{
//				for (int j = 0; j < 100; j++)
//					numsArr[j].Init();
//
//				for (int j = 0; j < sizeofCol; j++)
//				{
//					if (map[i][j] == 0)
//						continue;
//
//					numsArr[map[i][j] - 1].num = map[i][j];
//					numsArr[map[i][j] - 1].count++;
//				}
//				sort(numsArr, numsArr + 100, Compare);
//
//				int startIdx = 0;
//				int arrSize;
//				for (int j = 0; j < 100; j++)
//				{
//					arrSize = (j - startIdx + 1) * 2;
//
//					if (arrSize >= 100)
//						break;
//
//					if (numsArr[j].num == 0 || numsArr[j].count == 0)
//					{
//						startIdx++;
//						continue;
//					}
//
//					map[i][(j - startIdx) * 2] = numsArr[j].num;
//					map[i][(j - startIdx) * 2 + 1] = numsArr[j].count;
//					//cout << "인덱스" << (j - startIdx) * 2<<": " << map[i][(j - startIdx) * 2] << "\t" << "인덱스" << (j - startIdx) * 2+1 << ": "<< map[i][(j - startIdx) * 2 + 1] << "\t";
//				}
//				//cout << endl;
//
//				for (int j = arrSize; j < 100; j++)
//					map[i][j] = 0;
//
//				if (arrSize > maxSizeofCol)
//					maxSizeofCol = arrSize;
//
//				/*for (int j = 0; j < arrSize; j++)
//				{
//					cout << map[i][j] << "\t";
//				}
//				cout << endl;*/
//			}
//
//			sizeofCol = maxSizeofCol;
//			//cout << "sizeofCol: " << sizeofCol << endl;
//		}
//		else
//		{
//			// 열에 대한 정렬
//			for (int i = 0; i < sizeofCol; i++)
//			{
//				for (int j = 0; j < 100; j++)
//					numsArr[j].Init();
//
//				for (int j = 0; j < sizeofRow; j++)
//				{
//					if (map[j][i] == 0)
//						continue;
//
//					numsArr[map[j][i] - 1].num = map[j][i];
//					numsArr[map[j][i] - 1].count++;
//				}
//				sort(numsArr, numsArr + 100, Compare);
//
//				int startIdx = 0;
//				int arrSize;
//				for (int j = 0; j < 100; j++)
//				{
//					arrSize = (j - startIdx + 1) * 2;
//
//					if (arrSize >= 100)
//						break;
//
//					if (numsArr[j].num == 0 || numsArr[j].count == 0)
//					{
//						startIdx++;
//						continue;
//					}
//
//					map[(j - startIdx) * 2][i] = numsArr[j].num;
//					map[(j - startIdx) * 2 + 1][i] = numsArr[j].count;
//					//cout << "인덱스" << (j - startIdx) * 2<<": " << map[i][(j - startIdx) * 2] << "\t" << "인덱스" << (j - startIdx) * 2+1 << ": "<< map[i][(j - startIdx) * 2 + 1] << "\t";
//				}
//				//cout << endl;
//
//				for (int j = arrSize; j < 100; j++)
//					map[j][i] = 0;
//
//				if (arrSize > maxSizeofRow)
//					maxSizeofRow = arrSize;
//
//				/*for (int j = 0; j < arrSize; j++)
//				{
//					cout << map[j][i] << "\t";
//				}
//				cout << endl;*/
//			}
//
//			sizeofRow = maxSizeofRow;
//			//cout << "sizeofRow: " << sizeofRow << endl;
//		}
//
//		timeCount++;
//	}
//
//	return 0;
//}