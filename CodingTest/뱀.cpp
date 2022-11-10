#include <iostream>
#include <vector>
#include <deque>
using namespace std;

#define NOTHING 0
#define APPLE 1
#define SNAKE 2

struct Pos
{
	int row, col;
	Pos() {};
	Pos(int row, int col) :row(row), col(col) {};
	Pos operator+(Pos pos)
	{
		return Pos(row + pos.row, col + pos.col);
	}
};

struct Snake
{
	deque<Pos> pos;
	int dir;
	int len;
	Snake() {};
	Snake(deque<Pos> pos, int dir, int len) :pos(pos), dir(dir), len(len) {};
};

struct Apple
{
	Pos pos;
};

struct DirChange
{
	int changeTime;
	bool isCW;
};

Pos DirToPos(int dir)
{
	switch (dir)
	{
		case 0:
			return Pos(-1, 0);
		case 1:
			return Pos(0, 1);
		case 2:
			return Pos(1, 0);
		case 3:
			return Pos(0, -1);
		default:
			cout << "DirToPos 함수 입력이 잘못댐" << endl;
			break;
	}
	return Pos(0, 0);
}
int main()
{
	int sizeofMap;
	cin >> sizeofMap;

	int** map = new int* [sizeofMap];
	for (int i = 0; i < sizeofMap; i++)
	{
		map[i] = new int[sizeofMap];
		for (int j = 0; j < sizeofMap; j++)
		{
			map[i][j] = NOTHING;
		}
	}

	int numofApple;
	cin >> numofApple;

	Apple* apples = new Apple[numofApple];
	for (int i = 0; i < numofApple; i++)
	{
		cin >> apples[i].pos.row >> apples[i].pos.col;
		apples[i].pos.row--;
		apples[i].pos.col--;
		map[apples[i].pos.row][apples[i].pos.col] = APPLE;
	}

	int numofDirChange;
	cin >> numofDirChange;
	
	DirChange* dirChanges = new DirChange[numofDirChange];
	char changeDir;
	for (int i = 0; i < numofDirChange; i++)
	{
		cin >> dirChanges[i].changeTime >> changeDir;

		if (changeDir == 'D')
		{
			dirChanges[i].isCW = true;
		}
		else if (changeDir == 'L')
		{
			dirChanges[i].isCW = false;
		}
		else
		{
			cout << "방향 전환 입력이 R 또는 L이 아님" << endl;
		}
	}

	deque<Pos> snakePos;
	snakePos.push_back(Pos(0, 0));
	
	Snake snake(snakePos, 1, 1);
	map[0][0] = SNAKE;
	int dirChangeIdx = 0;

	int curTime = 0;
	while (true)
	{
		curTime++;

		Pos adjustedHeadPos = snake.pos.front() + DirToPos(snake.dir);
		
		if (adjustedHeadPos.row < 0 || adjustedHeadPos.row >= sizeofMap ||
			adjustedHeadPos.col < 0 || adjustedHeadPos.col >= sizeofMap)
		{
			break;
		}

		if (map[adjustedHeadPos.row][adjustedHeadPos.col] == SNAKE)
		{
			break;
		}
		else if (map[adjustedHeadPos.row][adjustedHeadPos.col] == APPLE)
		{
			map[adjustedHeadPos.row][adjustedHeadPos.col] = SNAKE;
			snake.pos.push_front(adjustedHeadPos);
			snake.len++;
		}
		else if (map[adjustedHeadPos.row][adjustedHeadPos.col] == NOTHING)
		{
			map[adjustedHeadPos.row][adjustedHeadPos.col] = SNAKE;
			snake.pos.push_front(adjustedHeadPos);
			map[snake.pos.back().row][snake.pos.back().col] = NOTHING;
			snake.pos.pop_back();
		}

		if (curTime == dirChanges[dirChangeIdx].changeTime)
		{
			if (dirChanges[dirChangeIdx].isCW == true)
			{
				snake.dir = (snake.dir + 1) % 4;
			}
			else
			{
				snake.dir = (snake.dir + 3) % 4;
			}

			dirChangeIdx++;
		}
	}

	cout << curTime;

	return 0;
}