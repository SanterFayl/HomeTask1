#include <iostream>
#include <iomanip>
using namespace std;
const int N = 18;
int MatrixGeneration(int(*matrix)[N]) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 27 - 13;
			cout << setw(4) << matrix[i][j];
		}
		cout << '\n';
	}
	return 0;
}
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
int CheckingForAPositiveLines(int(*matrix)[N]) {
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
int main() {
	int matrix[N][N] = {}, task{};
	MatrixGeneration(matrix);
	do
	{
		cout << "\nMenu\n1 - The sum of the elements of a line in a range\n2 - Checking for a positive line\n3 - Sum of required matrix elements\n4 - Exit\nEnter command number :";
			cin >> task;
		switch (task)
		{
		case 1:
			LineSum(matrix);
			break;
		case 2:
			CheckingForAPositiveLines(matrix);
			break;
		case 3:
			MatrixSum(matrix);
			break;
		default:
			break;
		}
	} while (task != 4);
	return 0;
}