#include "Matrix base.h"

int MatrixSum(int(*matrix)[N]) {
min = matrix[0][0];
    for (int i = 0; i < N; ++i) {
        if (matrix[i][i] < min) {
            min = m[i][i];
            minpos = i; 
        }
        if (matrix[i][N - 1 - i] > max) {
            max = m[i][N - 1 - i];
            maxpos = i;
        }
    }
}
