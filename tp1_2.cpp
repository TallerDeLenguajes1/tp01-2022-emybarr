#include <stdio.h>
#include <math.h>

float cuadrado(float *);
void cuadrados (float *);
void mostrar(int *);
void Invertir(int *p_a,int *p_b);
void orden( int *p_a, int *p_b);

int main(){

    float x , *puntero;
    int n, *p_n, a, b, *p_a,*p_b;
    puntero = &x;
    p_n =&n;
    p_a=&a;
    p_b=&b;



    //Haga una función que devuelva el cuadrado de un número//
    printf("ingrese un numero");
    scanf("%f",&x);
     x = cuadrado(puntero);
     printf("El cuadrado es %f \n",x);

    // Haga la función anterior, pero devolviendo un tipo void//

    cuadrados(puntero);

    //Al recibir una variable muestre por pantalla la dirección y el contenido de la variable//
    printf("ingrese un numero");
    scanf("%d",&n); 
    mostrar(p_n);

    //Dado dos parámetros de entrada, deberá invertir los valores entre ambos.//
    printf("ingrese un numero");
    scanf("%d",&a); 
    printf("ingrese un numero");
    scanf("%d",&b); 
    Invertir(p_a,p_b);

    // Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor.//
    printf("ingrese un numero");
    scanf("%d",&a); 
    printf("ingrese un numero");
    scanf("%d",&b); 
    Invertir(p_a,p_b);
     

return 0;

}

float cuadrado(float *puntero){

    float y;
    y= pow(*puntero,2);

    return y;
}

void cuadrados (float *puntero){
    *puntero=pow(*puntero,2);
    printf("El cuadradro es %f\n", *puntero);

}

void mostrar(int *p_n){

    printf("La direccion de memoria de la variable es %p\n",p_n);
     printf("El contenido  de la variable es %p\n",*p_n);
}

void Invertir(int *p_a,int *p_b){
    int aux;
    aux=*p_a;
    *p_a=*p_b;
    *p_b=aux;

    printf("El valor de a %d \n",*p_a);
    printf("El valor de b %d \n",*p_b);

}

void orden( int *p_a, int *p_b){
    if(*p_a >= *p_b){
        Invertir(p_a,p_b);
    }else{
          printf("El valor de a %d \n",*p_a);
          printf("El valor de b %d \n",*p_b);
        
    }
}