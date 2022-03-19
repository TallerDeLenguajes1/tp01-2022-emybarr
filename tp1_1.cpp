#include <stdio.h>

int main(){


    printf("hola mundo \n");

    int x = 85 ;
    int *puntero_x;

    puntero_x= &x;


    // El contenido del puntero //

    printf("El contenido del puntero %p \n", *puntero_x);

    // La direccion de memoria almacenada por el puntero //

    printf("La direccion de memoria alamacenada por el puntero %p\n", puntero_x);

    // La direccion de memoria de la variable//

    printf("La direccion de memoria de la variable %p \n" , &x);

    // La direccion de memoria del puntero //

    printf("La direccion de memoria del puntero %p \n", &puntero_x);

    //El tamaño de memoria utilizado por esa variable usando la funcion sixzof// 

    printf("Tamanio de la memoria %d" , sizeof(x));

    return 0;
}