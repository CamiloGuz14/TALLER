#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  
    char texto[50];
    printf("Escribe algo: ");

    fgets(texto, 50, stdin); 
    int len = strlen(texto);

    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0'; 
        len--;
    }

    int cont = 0, palabras = 0;
    int max = 0, min = 50; 

    for (int i = 0; i <= len; i++) {
        if (texto [i] != ' ' && texto [i] != '\0') {
            cont++;
        } else if (cont > 0) { 
            palabras++;
            if (cont > max) max = cont; 
            if (cont < min) min = cont; 
            cont = 0; 
        }
    }

    printf("El texto tiene %d letras.\n", len);
    printf("Total de palabras: %d\n", palabras);
    if (palabras > 0) {
        printf("Longitud de la palabra mas corta: %d\n", min);
        printf("Longitud de la palabra mas larga: %d\n", max);
    } else {
        printf("No se ingresaron palabras.\n");
    }

    return 0;
}

