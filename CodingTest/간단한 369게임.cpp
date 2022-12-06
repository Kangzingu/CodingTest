#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	cin >> num;

	string cur;
	string ans;
	int curNum;
	for (int i = 1; i <= num; i++)
	{
		cur = to_string(i);
		ans = "";
		for (int j = 0; j < cur.size(); j++)
		{
			curNum = cur[j] - '0';
			if (curNum != 0 && curNum % 3 == 0)
				ans += "-";
		}

		if (ans.size() == 0)
			ans = cur;

		cout << ans << " ";
	}

	return 0;
}