#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
  
    char texto[50];
    printf("Escribe algo: ");
    
    fgets(texto, sizeof(texto), stdin); 
    int len = strlen(texto);

    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0'; 
        len--;
    }

    int palabraLen = 0, palabras = 0;
    int maxLen = 0, minLen = 50; 

    for (int i = 0; i <= len; i++) {
        if (!isspace(texto[i]) && texto[i] != '\0') { 
            palabraLen++;
        } else if (palabraLen > 0) { 
            palabras++;
            if (palabraLen > maxLen) maxLen = palabraLen; 
            if (palabraLen < minLen) minLen = palabraLen; 
            palabraLen = 0; 
        }
    }

    printf("El texto tiene %d letras.\n", len);
    printf("Total de palabras: %d\n", palabras);
    if (palabras > 0) {
        printf("Longitud de la palabra mas corta: %d\n", minLen);
        printf("Longitud de la palabra mas larga: %d\n", maxLen);
    } else {
        printf("No se ingresaron palabras.\n");
    }

    return 0;
}
