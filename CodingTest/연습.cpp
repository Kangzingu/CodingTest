//////////#include <iostream>
//////////#include <vector>
//////////#include <algorithm>
//////////using namespace std;
//////////
//////////struct Pos
//////////{
//////////	int row, col;
//////////	Pos() {};
//////////	Pos(int row, int col) :row(row), col(col) {};
//////////};
//////////
//////////bool Compare(Pos p1, Pos p2)
//////////{
//////////	if (p1.row < p2.row)
//////////		return true;
//////////
//////////	return false;
//////////}
//////////
//////////int main()
//////////{
//////////	vector<Pos> v;
//////////	v.push_back(Pos(0, 1));
//////////	v.push_back(Pos(2, 1));
//////////	v.push_back(Pos(5, 1));
//////////	v.push_back(Pos(7, 1));
//////////	v.push_back(Pos(2, 1));
//////////	v.push_back(Pos(1, 1));
//////////	v.push_back(Pos(8, 1));
//////////	v.push_back(Pos(3, 1));
//////////	v.push_back(Pos(2, 1));
//////////	v.push_back(Pos(10, 1));
//////////	sort(v.begin(), v.end(), Compare);
//////////	cout << v[0].row;
//////////	return 0;
//////////}
////////
////////#include <iostream>
////////using namespace std;
////////
////////int main()
////////{
////////	int arr[3] = { 1, 2, 3 };
////////	cout << arr[3] << endl;
////////
////////	return 0;
////////}
//////
//////#include <iostream>
//////#include <thread>
//////#include <windows.h> 
//////using namespace std;
//////
//////CRITICAL_SECTION cs;
//////int cnt1, cnt2;
//////void func1()
//////{
//////	for (int i = 1; i <= 1000000; i++)
//////		cnt1++;
//////}
//////void func2()
//////{
//////	EnterCriticalSection(&cs);
//////
//////	for (int i = 1; i <= 1000000; i++)
//////		cnt2++;
//////
//////	LeaveCriticalSection(&cs);
//////}
//////int main()
//////{
//////	InitializeCriticalSection(&cs);
//////	for (int i = 0; i < 10; i++)
//////	{
//////		cnt1 = cnt2 = 0;
//////		thread t1(func1);
//////		thread t2(func1);
//////		thread t3(func2);
//////		thread t4(func2);
//////		t1.join();
//////		t2.join();
//////		t3.join();
//////		t4.join();
//////		printf("Critical Section 사용 X :: %d\n", cnt1);
//////		printf("Critical Section 사용 O :: %d\n", cnt2);
//////	}
//////	return 0;
//////}
////#include <iostream>
////#include <map>
////using namespace std;
////
////int main()
////{
////	map<string, char> m;
////	
////	cout << m["a"];
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double num = 0.1234567;
//
//	cout << fixed;
//	cout.precision(4); // 소수점 3째 자리 까지만 출력
//	cout << num;
//	return 0;
//}