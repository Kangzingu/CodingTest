//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct Rotation
//{
//	int plateIdx;
//	int dir;
//	int amount;
//};
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
//	int numofPlate, numofNum, targetTime;
//	cin >> numofPlate >> numofNum >> targetTime;
//
//	int** plates = new int* [numofPlate];
//	int** platesCopy = new int* [numofPlate];
//	int* offsets = new int[numofPlate];
//	for (int i = 0; i < numofPlate; i++)
//	{
//		plates[i] = new int[numofNum];
//		platesCopy[i] = new int[numofNum];
//		offsets[i] = 0;
//		for (int j = 0; j < numofNum; j++)
//		{
//			cin >> plates[i][j];
//			platesCopy[i][j] = plates[i][j];
//		}
//	}
//
//	int numofDir = 4;
//	vector<Pos> dirs;
//	dirs.push_back(Pos(-1, 0));
//	dirs.push_back(Pos(0, 1));
//	dirs.push_back(Pos(1, 0));
//	dirs.push_back(Pos(0, -1));
//
//	Rotation* rotations = new Rotation[targetTime];
//	Rotation rotation;
//	for (int i = 0; i < targetTime; i++)
//	{
//		cin >> rotation.plateIdx >> rotation.dir >> rotation.amount;
//		rotations[i] = rotation;
//	}
//
//	int timeCount = 0;
//	Rotation curRot;
//	int totalSum = 0;
//	while (true)
//	{
//		if (timeCount >= targetTime)
//		{
//			for (int i = 0; i < numofPlate; i++)
//			{
//				for (int j = 0; j < numofNum; j++)
//				{
//					if (plates[i][j] == -1)
//						continue;
//
//					totalSum += plates[i][j];
//				}
//			}
//			break;
//		}
//
//		curRot = rotations[timeCount];
//		for (int i = 0; i < numofPlate; i++)
//		{
//			if ((i + 1) % curRot.plateIdx != 0)
//				continue;
//
//			if (curRot.dir == 0)
//			{
//				offsets[i]-=curRot.amount;
//				if (offsets[i] < 0)
//					offsets[i] += numofNum;
//			}
//			else
//			{
//				offsets[i]+=curRot.amount;
//				if (offsets[i] >= numofNum)
//					offsets[i] -= numofNum;
//			}
//		}
//
//		for (int i = 0; i < numofPlate; i++)
//			for (int j = 0; j < numofNum; j++)
//				platesCopy[i][j] = plates[i][j];
//
//		Pos adjustedPos;
//		Pos curPos;
//		int totalSameNeighborCount = 0;
//		for (int i = 0; i < numofPlate; i++)
//		{
//			for (int j = 0; j < numofNum; j++)
//			{
//				curPos = Pos(i, (j + offsets[i]) % numofNum);
//				if (plates[curPos.row][curPos.col] == -1)
//					continue;
//
//				for (int k = 0; k < numofDir; k++)
//				{
//					adjustedPos = curPos + dirs[k];
//					if (adjustedPos.row < 0 || adjustedPos.row >= numofPlate)
//						continue;
//
//					if (adjustedPos.col < 0)
//						adjustedPos.col += numofNum;
//					
//					adjustedPos.col = adjustedPos.col - offsets[i] + offsets[adjustedPos.row];
//
//					if (adjustedPos.col < 0)
//						adjustedPos.col += numofNum;
//
//					if (adjustedPos.col >= numofNum)
//						adjustedPos.col -= numofNum;
//
//					if (plates[adjustedPos.row][adjustedPos.col] == plates[curPos.row][curPos.col])
//					{
//						platesCopy[curPos.row][curPos.col] = -1;
//						totalSameNeighborCount++;
//						break;
//					}
//				}
//			}
//		}
//
//		for (int i = 0; i < numofPlate; i++)
//			for (int j = 0; j < numofNum; j++)
//				plates[i][j] = platesCopy[i][j];
//
//		if (totalSameNeighborCount == 0)
//		{
//			float avg = 0;
//			int numCount = 0;
//			for (int i = 0; i < numofPlate; i++)
//			{
//				for (int j = 0; j < numofNum; j++)
//				{
//					if (plates[i][j] == -1)
//						continue;
//
//					avg += plates[i][j];
//					numCount++;
//				}
//			}
//			avg /= (float)numCount;
//
//			for (int i = 0; i < numofPlate; i++)
//			{
//				for (int j = 0; j < numofNum; j++)
//				{
//					if (plates[i][j] == -1)
//						continue;
//
//					if ((float)plates[i][j] > avg)
//						plates[i][j]--;
//					else if ((float)plates[i][j] < avg)
//						plates[i][j] ++;
//				}
//			}
//		}
//
//		timeCount++;
//	}
//	cout << totalSum;
//
//	return 0;
//}