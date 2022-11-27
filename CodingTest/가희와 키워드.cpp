#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int numofKeyword, numofWrite;
	cin >> numofKeyword >> numofWrite;

	unordered_map<string, bool> isKeywordsExist;
	string keyword;
	for (int i = 0; i < numofKeyword; i++)
	{
		cin >> keyword;
		isKeywordsExist[keyword] = true;
	}
	
	string keywords;
	for (int i = 0; i < numofWrite; i++)
	{
		cin >> keywords;
		keyword = "";
		for (int j = 0; j < keywords.size() + 1; j++)
		{
			if (j < keywords.size())
			{
				if (keywords[j] != ',')
				{
					keyword += keywords[j];
					continue;
				}
			}

			/*if (isKeywordsExist.find(keyword) == isKeywordsExist.end())
			{
				keyword = "";
				continue;
			}*/

			isKeywordsExist.erase(keyword);
			keyword = "";
		}
		
		cout << isKeywordsExist.size() << "\n";
	}

	return 0;
}