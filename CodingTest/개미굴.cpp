//#include <iostream>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//int numofWholeFood;
//
//struct Cell
//{
//	string key;
//	map<string, Cell> values;
//};
//
//void Print(int layer, Cell curCell, int& printCount)
//{
//	printCount++;
//	if (printCount != 1)
//	{
//		for (int i = 0; i < layer; i++)
//			cout << "--";
//		cout << curCell.key << "\n";
//	}
//
//	for (map<string, Cell>::iterator k = curCell.values.begin(); k != curCell.values.end(); k++)
//		Print(layer + 1, k->second, printCount);
//}
//
//int main()
//{
//	int numofFoodInfo;
//	cin >> numofFoodInfo;
//
//	Cell foods;
//	Cell* curFood;
//	numofWholeFood = 0;
//	for (int i = 0; i < numofFoodInfo; i++)
//	{
//		int numofFood;
//		cin >> numofFood;
//
//		curFood = &foods;
//		for (int j = 0; j < numofFood; j++)
//		{
//			string foodName;
//			cin >> foodName;
//
//			numofWholeFood++;
//			bool isExist = false;
//			for (map<string, Cell>::iterator k = curFood->values.begin(); k != curFood->values.end(); k++)
//			{
//				if (k->first == foodName)
//				{
//					curFood = &(k->second);
//					isExist = true;
//					break;
//				}
//			}
//
//			if (isExist == true)
//				continue;
//
//			Cell newFood;
//			newFood.key = foodName;
//			curFood->values[foodName] = newFood;
//			curFood = &(curFood->values[foodName]);
//		}
//	}
//
//	int printCount = 0;
//	Print(-1, foods, printCount);
//
//	return 0;
//}