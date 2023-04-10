#include "Matrix base.h"

int LineSum(int(*matrix)[N]) {
	int firstNumber{}, secondNumber{}, sumLine{};;
	cout << "Input first number: ";
	cin >> firstNumber;
	cout << "Input second number: ";
	cin >> secondNumber;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ((matrix[i][j]<firstNumber and matrix[i][j] > secondNumber) or
				(matrix[i][j] > firstNumber and matrix[i][j] < secondNumber))
			{
				sumLine += matrix[i][j];
			}
		}
		cout << "\nSum of line " << i + 1 << ": " << sumLine;
		sumLine = 0;
	}
	return 0;
}
