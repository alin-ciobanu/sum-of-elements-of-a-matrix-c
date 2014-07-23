#include <stdio.h>

#define N 12000

int matrix[N][N];

int main () {

    int i, j;
    int sum = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[j][i] = 1;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum += matrix[j][i];
        }
    }

    printf("The sum is: %d", sum);

    return 0;

}
