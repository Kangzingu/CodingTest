//#include <iostream>
//using namespace std;
//
//struct Stair
//{
//	unsigned short score[3];
//};
//int main()
//{
//	int numofStair;
//	cin >> numofStair;
//
//	Stair stair;
//	Stair* stairs = new Stair[numofStair];
//	for (int i = 0; i < numofStair; i++)
//	{
//		cin >> stair.score[0] >> stair.score[1] >> stair.score[2];
//		stairs[i] = stair;
//	}
//
//	int** maxDP = new int* [2];
//	int** minDP = new int* [2];
//	for (int i = 0; i < 2; i++)
//	{
//		maxDP[i] = new int[3];
//		minDP[i] = new int[3];
//		for (int j = 0; j < 3; j++)
//		{
//			maxDP[i][j] = 0;
//			minDP[i][j] = 0;
//		}
//	}
//
//	for (int i = 0; i < numofStair; i++)
//	{
//		if (i % 2 == 0)
//		{
//			maxDP[1][0] = max(maxDP[0][0] + stairs[i].score[0], maxDP[0][1] + stairs[i].score[1]);
//			maxDP[1][1] = max(max(maxDP[0][0] + stairs[i].score[0], maxDP[0][1] + stairs[i].score[1]), maxDP[0][2] + stairs[i].score[2]);
//			maxDP[1][2] = max(maxDP[0][1] + stairs[i].score[1], maxDP[0][2] + stairs[i].score[2]);
//			minDP[1][0] = min(minDP[0][0] + stairs[i].score[0], minDP[0][1] + stairs[i].score[1]);
//			minDP[1][1] = min(min(minDP[0][0] + stairs[i].score[0], minDP[0][1] + stairs[i].score[1]), minDP[0][2] + stairs[i].score[2]);
//			minDP[1][2] = min(minDP[0][1] + stairs[i].score[1], minDP[0][2] + stairs[i].score[2]);
//		}
//		else
//		{
//			maxDP[0][0] = max(maxDP[1][0] + stairs[i].score[0], maxDP[1][1] + stairs[i].score[1]);
//			maxDP[0][1] = max(max(maxDP[1][0] + stairs[i].score[0], maxDP[1][1] + stairs[i].score[1]), maxDP[1][2] + stairs[i].score[2]);
//			maxDP[0][2] = max(maxDP[1][1] + stairs[i].score[1], maxDP[1][2] + stairs[i].score[2]);
//			minDP[0][0] = min(minDP[1][0] + stairs[i].score[0], minDP[1][1] + stairs[i].score[1]);
//			minDP[0][1] = min(min(minDP[1][0] + stairs[i].score[0], minDP[1][1] + stairs[i].score[1]), minDP[1][2] + stairs[i].score[2]);
//			minDP[0][2] = min(minDP[1][1] + stairs[i].score[1], minDP[1][2] + stairs[i].score[2]);
//		}
//	}
//
//	if (numofStair % 2 == 0)
//	{
//		cout << max(max(maxDP[0][0], maxDP[0][1]), maxDP[0][2]);
//		cout << " ";
//		cout << min(min(minDP[0][0], minDP[0][1]), minDP[0][2]);
//	}
//	else
//	{
//		cout << max(max(maxDP[1][0], maxDP[1][1]), maxDP[1][2]);
//		cout << " ";
//		cout << min(min(minDP[1][0], minDP[1][1]), minDP[1][2]);
//	}
//	
//	return 0;
//}