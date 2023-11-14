// archivo: array_with_optimization.c
#include <stdio.h>

#define N 100000   

int main() {
    int array1[N];
    int result[N];

    // Inicializar los arrays
    for (int i = 0; i < N; ++i) {
        array1[i] = i;
    }

    // Realizar la operación con vectorización
    printf("Resultado con Vectorización:\n");
    for (int i = 0; i < N; ++i) {
        result[i] = array1[i] * 2;
    }


    return 0;
}

