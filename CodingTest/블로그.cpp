//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int numofDay, contNum;
//	cin >> numofDay >> contNum;
//
//	int* visitors = new int[numofDay];
//	int curSumofVisitor = 0;
//	int maxSumofVisitor = 0, maxSumofVisitorSameDayCount = 0;
//	for (int i = 0; i < numofDay; i++)
//	{
//		cin >> visitors[i];
//
//		curSumofVisitor += visitors[i];
//
//		if (i >= contNum)
//			curSumofVisitor -= visitors[i - contNum];
//
//		if (curSumofVisitor == maxSumofVisitor)
//			maxSumofVisitorSameDayCount++;
//		else if (curSumofVisitor > maxSumofVisitor)
//		{
//			maxSumofVisitor = curSumofVisitor;
//			maxSumofVisitorSameDayCount = 1;
//		}
//	}
//
//	if (maxSumofVisitor == 0)
//	{
//		cout << "SAD";
//
//		return 0;
//	}
//
//	cout << maxSumofVisitor << endl;
//	cout << maxSumofVisitorSameDayCount;
//	
//	return 0;
//}