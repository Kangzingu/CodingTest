//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Result
//{
//	int country;
//	int gold, silver, copper;
//	Result() {};
//	Result(int country, int gold, int silver, int copper) :country(country), gold(gold), silver(silver), copper(copper) {};
//};
//
//bool CompareResult(Result lhs, Result rhs)
//{
//	if (lhs.gold > rhs.gold)
//		return true;
//	else if (lhs.gold < rhs.gold)
//		return false;
//
//	if (lhs.silver > rhs.silver)
//		return true;
//	else if (lhs.silver < rhs.silver)
//		return false;
//
//	if (lhs.copper > rhs.copper)
//		return true;
//	else if (lhs.copper < rhs.copper)
//		return false;
//
//	return false;
//}
//
//int main()
//{
//	int numofCountry, targetCountry;
//	cin >> numofCountry >> targetCountry;
//
//	vector<Result> results;
//	Result result;
//	for (int i = 0; i < numofCountry; i++)
//	{
//		cin >> result.country >> result.gold >> result.silver >> result.copper;
//		results.push_back(result);
//	}
//
//	sort(results.begin(), results.end(), CompareResult);
//
//	int curGrade = 1;
//
//	if (results[0].country == targetCountry)
//	{
//		cout << curGrade << endl;
//		
//		return 0;
//	}
//
//	int skippedGrade = 1;
//	for (int i = 1; i < results.size(); i++)
//	{
//		if (results[i].gold != results[i - 1].gold ||
//			results[i].silver != results[i - 1].silver ||
//			results[i].copper != results[i - 1].copper)
//		{
//			curGrade+=skippedGrade;
//			skippedGrade = 1;
//		}
//		else
//			skippedGrade++;
//
//		if (results[i].country == targetCountry)
//			break;
//	}
//
//	cout << curGrade;
//
//	return 0;
//}