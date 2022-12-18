#include <iostream>
using namespace std;

int main()
{
	int sizeofRow, sizeofCol, rowStride, colStride;
	cin >> sizeofRow >> sizeofCol >> rowStride >> colStride;

	int rowCount, colCount;
	if (sizeofRow % (rowStride + 1) != 0)
		rowCount = sizeofRow / (rowStride + 1) + 1;
	else
		rowCount = sizeofRow / (rowStride + 1);

	if (sizeofCol % (colStride + 1) != 0)
		colCount = sizeofCol / (colStride + 1) + 1;
	else
		colCount = sizeofCol / (colStride + 1);

	cout << rowCount * colCount;

	return 0;
}