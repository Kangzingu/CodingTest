#include <iostream>
using namespace std;

int main()
{
	int numofCase;
	cin >> numofCase;

	for (int caseCount = 0; caseCount < numofCase; caseCount++)
	{
		int a, b;
		cin >> a >> b;

		if (a < b)
			cout << "#" << caseCount + 1 << " <" << endl;
		else if (a == b)
			cout << "#" << caseCount + 1 << " =" << endl;
		else
			cout << "#" << caseCount + 1 << " >" << endl;
	}

	return 0;
}