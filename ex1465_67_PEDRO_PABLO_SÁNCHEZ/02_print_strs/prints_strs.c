#include <unistd.h>

int main(int argc, char *argv[]) {
    int i;

    // Imprimir argumentos impares de izquierda a derecha
    for (i = 1; i < argc; i += 2) {
        int j = 0;
        while (argv[i][j] != '\0') {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, " ", 1);  // Agregar un espacio entre argumentos
    }

    // Imprimir argumentos pares de derecha a izquierda
    for (i = argc - 1; i >= 2; i -= 2) {
        int j = 0;
        while (argv[i][j] != '\0') {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, " ", 1);  // Agregar un espacio entre argumentos
    }

    // Imprimir el último argumento si existe y es impar
    if (argc % 2 != 0) {
        int j = 0;
        while (argv[argc - 1][j] != '\0') {
            write(1, &argv[argc - 1][j], 1);
            j++;
        }
    }

    // Imprimir un salto de línea al final
    write(1, "\n", 1);

    return 0;
}

