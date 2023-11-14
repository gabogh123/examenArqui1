// archivo: no_loop_interchange.c

#include <stdio.h>

#define N 1000
#define M 500

int main() {
    int array[N][M];
    int result;

    // Inicializar el array
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            array[i][j] = i * M + j;

    // Imprimir el array original
    printf("Array Original:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j)
            //printf("%3d ", array[i][j]);
            result = array[i][j];
        //printf("\n");
    }

    return 0;
}
