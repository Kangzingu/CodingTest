//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	int numofPlayer;
//	char gameType;
//	cin >> numofPlayer >> gameType;
//
//	unordered_map<string, bool> players;
//	string playerName;
//	for (int i = 0; i < numofPlayer; i++)
//	{
//		cin >> playerName;
//		players[playerName] = true;
//	}
//
//	int numofRealPlayer = players.size();
//	int gameCount;
//	switch (gameType)
//	{
//		case 'Y':
//			gameCount = numofRealPlayer;
//			break;
//		case 'F':
//			gameCount = numofRealPlayer / 2;
//			break;
//		case 'O':
//			gameCount = numofRealPlayer / 3;
//			break;
//	}
//
//	cout << gameCount;
//
//	return 0;
//}