//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	
//	while (true)
//	{
//		vector<int> lens;
//		int len;
//
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> len;
//			lens.push_back(len);
//		}
//
//		if (lens[0] == 0 &&
//			lens[1] == 0 &&
//			lens[2] == 0)
//			break;
//
//		sort(lens.begin(), lens.end());
//
//		if (lens[0] + lens[1] <= lens[2])
//		{
//			cout << "Invalid\n";
//			continue;
//		}
//
//		if (lens[0] == lens[1] &&
//			lens[1] == lens[2])
//		{
//			cout << "Equilateral\n";
//			continue;
//		}
//
//		if (lens[0] == lens[1] ||
//			lens[1] == lens[2] ||
//			lens[2] == lens[0])
//		{
//			cout << "Isosceles\n";
//			continue;
//		}
//
//		cout << "Scalene\n";
//	}
//
//	return 0;
//}