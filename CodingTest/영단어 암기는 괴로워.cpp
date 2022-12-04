#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

struct Word
{
	string data;
	int appearCount;
	Word() {};
	Word(string data, int appearCount) :data(data), appearCount(appearCount) {};
};

bool Compare(Word lhs, Word rhs)
{
	if (lhs.appearCount > rhs.appearCount)
		return true;
	else if (lhs.appearCount < rhs.appearCount)
		return false;

	if (lhs.data.size() > rhs.data.size())
		return true;
	else if (lhs.data.size() < rhs.data.size())
		return false;

	if (lhs.data < rhs.data)
		return true;

	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int numofWord, minLenofWord;
	cin >> numofWord >> minLenofWord;

	map<string, int> words;
	string inputWord;
	for (int i = 0; i < numofWord; i++)
	{
		cin >> inputWord;

		if (inputWord.size() < minLenofWord)
			continue;

		words[inputWord]++;
	}
	
	vector<Word> wordBook;
	for (map<string, int>::iterator word = words.begin(); word != words.end(); word++)
		wordBook.push_back(Word(word->first, word->second));

	sort(wordBook.begin(), wordBook.end(), Compare);

	for (int i = 0; i < wordBook.size(); i++)
		cout << wordBook[i].data << "\n";

	return 0;
}