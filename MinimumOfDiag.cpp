#include "Matrix base.h"

int LineSum(int(*matrix)[N]) {
    
    int min = matrix[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[j][j] < min && i == j) {
                min = matrix[j][j];
            }
        }
    }

    cout << min;
    return 0;
}
