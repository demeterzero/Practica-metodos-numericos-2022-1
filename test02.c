//acerca del printf

#include <stdio.h>

void main()
{
    char letra = 'A';
    char cadena[20] = "esto es una frase";
    int numero_int = 13;
    long numero_long = 333;
    long long numero_superlargo = 444444;
    float decimal = 12.123;
    double decimal_grande = 12.123456;

    printf("La letra es %c \n", &letra);
    printf("La cadena es %s \n", &cadena);
    printf("El numero int es %d \n", numero_int);
    printf("El numero long es %ld \n", numero_long);
    printf("El numero long long es %lld \n", numero_superlargo);
    printf("El numero float es %0.3f \n",decimal);
    printf("El numero double es %0.6lf \n", numero_double);

}
