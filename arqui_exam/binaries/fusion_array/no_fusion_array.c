#include <stdio.h>

#define N 100000

int main() {
    int array1[N/4];
    int array2[N/4];
    int array3[N/4];
    int array4[N/4];
    int result[N];

    // Inicializar los arrays
    for (int i = 0; i < N/4; ++i) {
        array1[i] = i;
    }
    for (int i = N/4; i < N/2; ++i) {
        array2[i - (N/4)] = i;
    }
    for (int i = N/2; i < (3*N)/4; ++i) {
        array3[i - (N/2)] = i;
    }
    for (int i = (3*N)/4; i < N; ++i) {
        array4[i - ((3*N)/4)] = i;
    }

    // Realizar la operación sin vectorización
    printf("Resultado sin Vectorización:\n");
    for (int i = 0; i < N/4; ++i) {
        result[i] = array1[i] * 2;
    }
    for (int i = N/4; i < N/2; ++i) {
        result[i] = array2[i - (N/4)] * 2;
    }
    for (int i = N/2; i < (3*N)/4; ++i) {
        result[i] = array3[i - (N/2)] * 2;
    }
    for (int i = (3*N)/4; i < N; ++i) {
        result[i] = array4[i - ((3*N)/4)] * 2;
    }


    return 0;
}

