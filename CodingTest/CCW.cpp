//#include <iostream>
//using namespace std;
//
//struct Point
//{
//	int x;
//	int y;
//	int z = 0;
//	Point() {};
//	Point(int x, int y, int z) :x(x), y(y), z(z) {};
//	Point operator-(Point p)
//	{
//		return Point(x - p.x, y - p.y, z - p.z);
//	}
//};
//
//struct Vector3
//{
//	int x;
//	int y;
//	int z;
//	Vector3() {};
//	Vector3(int x, int y, int z) :x(x), y(y), z(z) {};
//	void operator=(Point p)
//	{
//		x = p.x;
//		y = p.y;
//		z = p.z;
//	}
//	static Vector3 Cross(Vector3 v1, Vector3 v2)
//	{
//		return Vector3(v1.y * v2.z - v1.z * v2.y, v1.x * v2.z - v1.z * v2.x, v1.x * v2.y - v1.y * v2.x);
//	}
//};
//
//int main()
//{
//	Point points[3];
//	cin >> points[0].x >> points[0].y;
//	cin >> points[1].x >> points[1].y;
//	cin >> points[2].x >> points[2].y;
//	
//	Vector3 vectors[2];
//	vectors[0] = (points[0] - points[1]);
//	vectors[1] = (points[2] - points[1]);
//	
//	Vector3 crossResult = Vector3::Cross(vectors[1], vectors[0]);
//
//	if (crossResult.z < 0)
//	{
//		cout << -1;
//	}
//	else if (crossResult.z > 0)
//	{
//		cout << 1;
//	}
//	else
//	{
//		cout << 0;
//	}
//
//	return 0;
//}