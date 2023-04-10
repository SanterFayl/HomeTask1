#include "Matrix base.h"
using namespace std;
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
