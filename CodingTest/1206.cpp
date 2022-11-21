#include<iostream>
#include<vector>
using namespace std;

struct Building
{
	int height;
};

int Max(int lhs, int rhs)
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	//freopen("input.txt", "r", stdin);
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	Building buildings[1000];
	for (test_case = 1; test_case <= T; ++test_case)
	{
		/////////////////////////////////////////////////////////////////////////////////////////////

		int numofBuilding;
		cin >> numofBuilding;

		int viewPossibleFloorCount = 0;
		for (int i = 0; i < numofBuilding; i++)
			cin >> buildings[i].height;

		for (int i = 0; i < numofBuilding; i++)
		{
			int maxNeighborHeight = 0;
			for (int j = -2; j <= 2; j++)
			{
				if (i + j < 0 || i + j >= numofBuilding
					|| j == 0)
					continue;

				if (buildings[i + j].height > maxNeighborHeight)
					maxNeighborHeight = buildings[i + j].height;
			}

			viewPossibleFloorCount += Max(0, buildings[i].height - maxNeighborHeight);
		}

		cout << "#" << test_case << " " << viewPossibleFloorCount << endl;

		/////////////////////////////////////////////////////////////////////////////////////////////
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
