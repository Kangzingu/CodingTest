//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct People
//{
//	int idx;
//	int weight;
//	int tall;
//	int rank;
//	People() {};
//	People(int idx, int weight, int tall, int rank): idx(idx), weight(weight), tall(tall), rank(rank) {};
//};
//
//bool ComparePeopleRank(People lhs, People rhs)
//{
//	if (lhs.rank < rhs.rank)
//		return true;
//
//	return false;
//}
//
//bool ComparePeopleIdx(People lhs, People rhs)
//{
//	if (lhs.idx < rhs.idx)
//		return true;
//
//	return false;
//}
//
//int main()
//{
//	int numofPeople;
//	cin >> numofPeople;
//
//	vector<People> peoples;
//	People people;
//	for (int i = 0; i < numofPeople; i++)
//	{
//		people.idx = i;
//		cin >> people.weight >> people.tall;
//		people.rank = 0;
//
//		peoples.push_back(people);
//	}
//
//	for (int i = 0; i < numofPeople; i++)
//	{
//		int biggerPeopleCount = 0;
//		for (int j = 0; j < numofPeople; j++)
//		{
//			if (i == j)
//				continue;
//
//			if (peoples[i].weight < peoples[j].weight &&
//				peoples[i].tall < peoples[j].tall)
//				biggerPeopleCount++;
//		}
//
//		peoples[i].rank = biggerPeopleCount + 1;
//	}
//
//	for (int i = 0; i < numofPeople; i++)
//		cout << peoples[i].rank << " ";
//
//	return 0;
//}