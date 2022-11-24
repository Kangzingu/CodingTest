//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int numofCommand;
//	cin >> numofCommand;
//
//	string command;
//	int num;
//	int bits = 0;
//	getline(cin, command);
//	for (int i = 0; i < numofCommand; i++)
//	{
//		getline(cin, command);
//
//		switch (command[1])
//		{
//			case 'd':
//				num = stoi(command.substr(4, command.size() - 4 + 1));
//
//				bits |= (1 << num);
//
//				break;
//			case 'e':
//				num = stoi(command.substr(7, command.size() - 7 + 1));
//
//				bits &= ~(1 << num);
//
//				break;
//			case 'h':
//				num = stoi(command.substr(6, command.size() - 6 + 1));
//
//				if (bits & (1 << num))
//					cout << 1 << "\n";
//				else
//					cout << 0 << "\n";
//
//				break;
//			case 'o':
//				num = stoi(command.substr(7, command.size() - 7 + 1));
//
//				if (bits & (1 << num))
//					bits &= (0 << num);
//				else
//					bits |= (1 << num); 
//
//				break;
//			case 'l':
//				bits = (1 << 21) - 1; 
//
//				break;
//			case 'm':
//				bits = 0; 
//
//				break;
//		}
//	}
//
//	return 0;
//}