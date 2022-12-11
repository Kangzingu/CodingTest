//#include <iostream>
//#include <string>
//using namespace std;
//
//bool isVowel(char inputChar)
//{
//	if (inputChar == 'a' ||
//		inputChar == 'e' ||
//		inputChar == 'i' ||
//		inputChar == 'o' ||
//		inputChar == 'u')
//		return true;
//
//	return false;
//}
//
//int main()
//{
//	string inputString;
//	while (true)
//	{
//		cin >> inputString;
//		if (inputString == "end")
//			break;
//
//		bool isVowelExist = false;
//		bool isContCountOver3 = false;
//		bool isSameCharCountOver2 = false;
//		
//		char curChar;
//		char prevChar = '-';
//		int contVowelCount = 0;
//		int contConsonantCount = 0;
//		bool isCurCharVowel;
//		for (int i = 0; i < inputString.size(); i++)
//		{
//			curChar = inputString[i];
//
//			isCurCharVowel = isVowel(curChar);
//
//			if (isCurCharVowel == true)
//			{
//				if (isVowelExist == false)
//					isVowelExist = true;
//
//				contVowelCount++;
//				if (contVowelCount >= 3)
//				{
//					isContCountOver3 = true;
//					break;
//				}
//				contConsonantCount = 0;
//			}
//			else
//			{
//				contConsonantCount++;
//				if (contConsonantCount >= 3)
//				{
//					isContCountOver3 = true;
//					break;
//				}
//				contVowelCount = 0;
//			}
//
//			if (prevChar == curChar)
//			{
//				if(curChar != 'e' && curChar != 'o')
//				{
//					isSameCharCountOver2 = true;
//					break;
//				}
//			}
//
//			prevChar = curChar;
//		}
//
//		if (!isVowelExist || isContCountOver3 || isSameCharCountOver2)
//			cout << "<" << inputString << "> is not acceptable.\n";
//		else
//			cout << "<" << inputString << "> is acceptable.\n";
//	}
//
//	return 0;
//}