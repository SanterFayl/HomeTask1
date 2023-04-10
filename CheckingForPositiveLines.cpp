#include "Matrix base.h"

int CheckingForPositiveLines(int(*matrix)[N]) {
	bool flag = 1;
	for (int i = 0; i < N; i++)
	{
		flag = 1;
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] <= 0)
			{
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	if (flag == 1)
	{
		cout << "\nThere is a positive line\n";
	}
	else
	{
		cout << "\nThere is no positive lines\n";
	}
	return 0;
}
