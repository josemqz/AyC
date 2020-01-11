#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct clase{
    int inicio;
    int termino;
} clase;

void printClases(clase *Clases, int cantidad){
    int x = 0;
    printf("%d\n", cantidad);
    for (x = 0; x<cantidad; x++)
        printf("%d %d\n", Clases[x].inicio, Clases[x].termino);
    
}

int main() {
    int cantidadHorarios;    
    
    FILE* input = stdin; // Se abre el archivo de entrada standard.
    fscanf(input, "%d", &cantidadHorarios);
    
    if (!feof(input)){ // Itera sobre las distintas lineas de datos.
        
        clase *Clases = malloc(cantidadHorarios*sizeof(clase));
        memset(Clases, 0, cantidadHorarios*sizeof(clase));
        
        int index = 0;
        for (index = 0 ; index < cantidadHorarios ; index++){
            fscanf(input, "%d", &(Clases[index].inicio));
            fscanf(input, "%d", &(Clases[index].termino));
        } // Se crea cada una de las clases.
        
        printClases(Clases, cantidadHorarios);
    }
    fclose(input);
    return 0;
}

