#include <stdio.h>

int main () {
    // Apuntador al archivo input, se abre modo solo lectura
    FILE* ptr = fopen("input","r");
    // Apuntador al archivo output, que se crea si no existe, o se sobrescribe si ya existe
    FILE* ptw = fopen("output","w");

    //Comprueba si existe el archivo llamado input
    if (ptr==NULL)
    {
        printf("El archivo no existe.");
        return 0;
    }

    // Arreglo para almacenar una línea de un archivo
    char buf[100];

    // Recorre el archivo hasta encontrar un fin de archivo
    while (fgets(buf,100,ptr)!=NULL)
    {
        fprintf(ptw,"%s",buf); // Guarda el contenido de la línea en el archivo output
    }
    // Cierra apuntadores de los archivos
    fclose(ptr);
    fclose(ptw);

   return(0);
}
