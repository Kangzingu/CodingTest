////////////////#include <iostream>
////////////////#include <vector>
////////////////#include <algorithm>
////////////////using namespace std;
////////////////
////////////////struct Pos
////////////////{
////////////////	int row, col;
////////////////	Pos() {};
////////////////	Pos(int row, int col) :row(row), col(col) {};
////////////////};
////////////////
////////////////bool Compare(Pos p1, Pos p2)
////////////////{
////////////////	if (p1.row < p2.row)
////////////////		return true;
////////////////
////////////////	return false;
////////////////}
////////////////
////////////////int main()
////////////////{
////////////////	vector<Pos> v;
////////////////	v.push_back(Pos(0, 1));
////////////////	v.push_back(Pos(2, 1));
////////////////	v.push_back(Pos(5, 1));
////////////////	v.push_back(Pos(7, 1));
////////////////	v.push_back(Pos(2, 1));
////////////////	v.push_back(Pos(1, 1));
////////////////	v.push_back(Pos(8, 1));
////////////////	v.push_back(Pos(3, 1));
////////////////	v.push_back(Pos(2, 1));
////////////////	v.push_back(Pos(10, 1));
////////////////	sort(v.begin(), v.end(), Compare);
////////////////	cout << v[0].row;
////////////////	return 0;
////////////////}
//////////////
//////////////#include <iostream>
//////////////using namespace std;
//////////////
//////////////int main()
//////////////{
//////////////	int arr[3] = { 1, 2, 3 };
//////////////	cout << arr[3] << endl;
//////////////
//////////////	return 0;
//////////////}
////////////
////////////#include <iostream>
////////////#include <thread>
////////////#include <windows.h> 
////////////using namespace std;
////////////
////////////CRITICAL_SECTION cs;
////////////int cnt1, cnt2;
////////////void func1()
////////////{
////////////	for (int i = 1; i <= 1000000; i++)
////////////		cnt1++;
////////////}
////////////void func2()
////////////{
////////////	EnterCriticalSection(&cs);
////////////
////////////	for (int i = 1; i <= 1000000; i++)
////////////		cnt2++;
////////////
////////////	LeaveCriticalSection(&cs);
////////////}
////////////int main()
////////////{
////////////	InitializeCriticalSection(&cs);
////////////	for (int i = 0; i < 10; i++)
////////////	{
////////////		cnt1 = cnt2 = 0;
////////////		thread t1(func1);
////////////		thread t2(func1);
////////////		thread t3(func2);
////////////		thread t4(func2);
////////////		t1.join();
////////////		t2.join();
////////////		t3.join();
////////////		t4.join();
////////////		printf("Critical Section 사용 X :: %d\n", cnt1);
////////////		printf("Critical Section 사용 O :: %d\n", cnt2);
////////////	}
////////////	return 0;
////////////}
//////////#include <iostream>
//////////#include <map>
//////////using namespace std;
//////////
//////////int main()
//////////{
//////////	map<string, char> m;
//////////	
//////////	cout << m["a"];
//////////	return 0;
//////////}
////////
////////#include <iostream>
////////using namespace std;
////////
////////int main()
////////{
////////	double num = 0.1234567;
////////
////////	cout << fixed;
////////	cout.precision(4); // 소수점 3째 자리 까지만 출력
////////	cout << num;
////////	return 0;
////////}
//////#include <stdio.h>
//////#include <stdlib.h>
//////
//////int main()
//////{
//////	printf("Hello, world!\n");
//////	char* p_c = (char*)calloc(3, sizeof(char) * 1);
//////	char* p_c2 = new char();
//////	short* p_i = (short*)p_c;
//////	long long* p_ll = (long long*)p_c;
//////
//////	printf("%d\n", *(p_c));
//////	printf("%d\n", *(p_i));
//////	printf("%d\n", *(p_ll));
//////
//////	return 0;
//////}
////
////#include <iostream>
////using namespace std;
////
////struct A
////{
////	int val;
////	A()
////	{
////		cout << "A Init" << endl;
////	}
////	virtual void Print()
////	{
////		cout << "A" << endl;
////	}
////};
////
////struct B :A
////{
////	B()
////	{
////		cout << "B Init" << endl;
////	}
////	void Print()
////	{
////		cout << "B" << endl;
////	}
////};
////
////struct C :B
////{
////	C()
////	{
////		cout << "C Init" << endl;
////	}
////	void Print()
////	{
////		cout << "C" << endl;
////	}
////};
////
////struct AA :A
////{
////	AA()
////	{
////		cout << "AA Init" << endl;
////	}
////	void Print()
////	{
////		A::A::A::A::A::A::A::A();
////		cout << "AA" << endl;
////	}
////};
////
////int main()
////{
////	cout << "Hello, World!" << endl;
////	A* a = new C;
////	a->Print();
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//
//struct Product
//{
//	int weight, value;
//	Product() {};
//	Product(int weight, int value) : weight(weight), value(value) {};
//};
//int main()
//{
//	int numofProduct, maxWeight;
//	cin >> numofProduct >> maxWeight;
//	
//	Product* products = new Product[numofProduct];
//	for (int i = 0; i < numofProduct; i++)
//	{
//		cin >> products[i].weight >> products[i].value;
//	}
//
//	int* dp = new int[maxWeight + 1];
//	for (int i = 0; i < maxWeight+1; i++)
//	{
//		dp[i] = 0;
//	}
//
//	for (int i = 0; i < numofProduct; i++)
//	{
//		for (int j = maxWeight; j >= products[i].weight; j--)
//		{
//			if (j == products[i].weight && dp[j] == 0)
//			{
//				dp[j] = products[i].value;
//				continue;
//			}
//
//			if (dp[j - products[i].weight] == 0)
//			{
//				continue;
//			}
//
//			if (dp[j - products[i].weight] + products[i].value <= dp[j])
//			{
//				continue;
//			}
//
//			dp[j] = dp[j - products[i].weight] + products[i].value;
//		}
//	}
//	
//	int maxValue = 0;
//	for (int i = 0; i < maxWeight + 1; i++)
//	{
//		if (dp[i] > maxValue)
//		{
//			maxValue = dp[i];
//		}
//	}
//
//	cout << maxValue;
//
//	return 0;
//}