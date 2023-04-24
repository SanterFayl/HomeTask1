#include "Matrix base.h"

int MatrixSum(int(*matrix)[N]) {
	int sumMatrix = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i <= j)
			{
				sumMatrix += matrix[i][j];
				
			}
		}
	}
	cout << "\nSum is " << sumMatrix << '\n';
	return 0;
}
