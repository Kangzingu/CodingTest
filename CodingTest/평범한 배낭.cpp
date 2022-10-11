//#include <iostream>
//using namespace std;
//
//struct Product
//{
//	int size;
//	int value;
//};
//int main()
//{
//	int numofProduct, sizeofBackpack;
//	cin >> numofProduct >> sizeofBackpack;
//
//	int* dp = new int[sizeofBackpack + 1];
//	for (int i = 0; i < sizeofBackpack + 1; i++)
//		dp[i] = 0;
//
//	Product product;
//	Product* products = new Product[numofProduct];
//	for (int i = 0; i < numofProduct; i++)
//	{
//		cin >> product.size >> product.value;
//		products[i] = product;
//	}
//
//	int totalMaxVal = 0;
//	for (int i = 0; i < numofProduct; i++)
//	{
//		for (int j = sizeofBackpack; j >= products[i].size; j--)
//		{
//			if (dp[j] >= dp[j - products[i].size] + products[i].value)
//				continue;
//
//			dp[j] = dp[j - products[i].size] + products[i].value;
//
//			if (dp[j] > totalMaxVal)
//				totalMaxVal = dp[j];
//		}
//	}
//
//	cout << totalMaxVal;
//	return 0;
//}