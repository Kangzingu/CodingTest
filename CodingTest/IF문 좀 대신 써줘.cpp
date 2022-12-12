#include <iostream>
using namespace std;

struct SecondName
{
	string name;
	int strongness;
};

void BinarySearch(SecondName* secondName, int targetStrongness, int startIdx, int endIdx, string& result)
{
	if (startIdx > endIdx)
		return;

	if (result != "")
		return;

	int centerIdx = (startIdx + endIdx) / 2;

	if (centerIdx < 0)
		return;

	if (centerIdx == 0 && targetStrongness <= secondName[centerIdx].strongness)
	{
		result = secondName[centerIdx].name;
		return;
	}

	if (secondName[centerIdx - 1].strongness < targetStrongness && targetStrongness <= secondName[centerIdx].strongness)
		result = secondName[centerIdx].name;
	else if (secondName[centerIdx].strongness < targetStrongness)
		BinarySearch(secondName, targetStrongness, centerIdx + 1, endIdx, result);
	else
		BinarySearch(secondName, targetStrongness, startIdx, centerIdx - 1, result);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int numofSecondName, numofCharacters;
	cin >> numofSecondName >> numofCharacters;

	SecondName* secondNames = new SecondName[numofSecondName];
	SecondName inputSecondName;
	int realSecondNameCount = 0;
	for (int i = 0; i < numofSecondName; i++)
	{
		cin >> inputSecondName.name >> inputSecondName.strongness;

		if (realSecondNameCount == 0)
		{
			secondNames[realSecondNameCount++] = inputSecondName;
			continue;
		}

		if (inputSecondName.strongness <= secondNames[realSecondNameCount - 1].strongness)
			continue;

		secondNames[realSecondNameCount++] = inputSecondName;
	}

	int inputStrongness;
	string resultSecondName;
	for (int i = 0; i < numofCharacters; i++)
	{
		cin >> inputStrongness;
		resultSecondName = "";
		BinarySearch(secondNames, inputStrongness, 0, realSecondNameCount - 1, resultSecondName);

		cout << resultSecondName << "\n";
	}

	return 0;
}