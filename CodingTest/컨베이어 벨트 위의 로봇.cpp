//#include <iostream>
//using namespace std;
//
//struct Belt
//{
//	int hp;
//	bool isRobotExist = false;
//	Belt() {};
//	Belt(int hp, bool isRobotExist) {};
//};
//
//int main()
//{
//	int sizeofBelt, targetBreakedBeltCount;
//	cin >> sizeofBelt >> targetBreakedBeltCount;
//
//	Belt* belts = new Belt[sizeofBelt * 2];
//	Belt belt;
//	for (int i = 0; i < sizeofBelt * 2; i++)
//	{
//		cin >> belt.hp;
//		belts[i] = belt;
//	}
//
//	int firstLineIdx = 0;
//	int secondLineIdx = sizeofBelt;
//	int takeOffIdx = secondLineIdx - 1;
//
//	int roundCount = 0;
//	while (true)
//	{
//		roundCount++;
//
//		/*cout << "=== Round " << roundCount<<endl;
//		for (int i = 0; i < sizeofBelt; i++)
//		{
//			int curIdx = firstLineIdx + i;
//			if (curIdx >= sizeofBelt * 2)
//				curIdx -= sizeofBelt * 2;
//
//			if (belts[curIdx].isRobotExist == true)
//				cout << "O(" << belts[curIdx].hp << ")\t";
//			else
//				cout << "X(" << belts[curIdx].hp << ")\t";
//		}
//		cout << endl;
//		for (int i = 0; i < sizeofBelt; i++)
//		{
//			int curIdx = firstLineIdx - 1- i;
//			if (curIdx < 0)
//				curIdx += sizeofBelt * 2;
//
//			if (belts[curIdx].isRobotExist == true)
//				cout << "O(" << belts[curIdx].hp << ")\t";
//			else
//				cout << "X(" << belts[curIdx].hp << ")\t";
//		}
//		cout << endl;*/
//
//		firstLineIdx--;
//		secondLineIdx--;
//		takeOffIdx = secondLineIdx - 1;
//		if (firstLineIdx < 0)
//			firstLineIdx += sizeofBelt * 2;
//		
//		if (secondLineIdx < 0)
//			secondLineIdx += sizeofBelt * 2;
//
//		if (takeOffIdx< 0)
//			takeOffIdx += sizeofBelt * 2;
//
//		for (int i = 1; i <= sizeofBelt; i++)
//		{
//			int curIdx = secondLineIdx - i;
//			if (curIdx < 0)
//				curIdx += sizeofBelt * 2;
//
//			if (curIdx == takeOffIdx)
//			{
//				belts[curIdx].isRobotExist = false;
//				continue;
//			}
//
//			if (belts[curIdx].isRobotExist == false)
//				continue;
//			
//			int nextIdx = curIdx + 1;
//			if (nextIdx >= sizeofBelt * 2)
//				nextIdx -= sizeofBelt * 2;
//
//			if (belts[nextIdx].isRobotExist == true)
//				continue;
//
//			if (belts[nextIdx].hp <= 0)
//				continue;
//
//			belts[nextIdx].isRobotExist = true;
//			belts[nextIdx].hp--;
//			belts[curIdx].isRobotExist = false;
//
//			if (nextIdx == takeOffIdx)
//				belts[nextIdx].isRobotExist = false;
//		}
//
//		if (belts[firstLineIdx].hp >= 1)
//		{
//			belts[firstLineIdx].isRobotExist = true;
//			belts[firstLineIdx].hp--;
//		}
//
//		int breakedBeltCount = 0;
//		for (int i = 0; i < sizeofBelt * 2; i++)
//		{
//			if (belts[i].hp <= 0)
//				breakedBeltCount++;
//		}
//
//		if (breakedBeltCount >= targetBreakedBeltCount)
//			break;
//	}
//
//	cout << roundCount;
//
//	return 0;
//}