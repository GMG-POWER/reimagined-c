#ifndef INICIO
#define INICIO

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definindo um macro para encapsular 'void'
#define funcao void
#define para for
#define tamanho sizeof
#define se if

#define escreva(x) _Generic((x), \
    int: escreverInteiro, \
    float: escreverReal, \
    double: escreverDouble, \
    char *: escreverCadeia \
)(x)

#define leia(x) _Generic((x), \
    int *: lerInteiro, \
    float *: lerReal, \
    double *: lerDouble, \
    char *: lerCadeia, \
    default: leia_padrao \
)(x)


typedef int inteiro;
typedef char cadeia;
typedef float real;


// Definindo um macro para encapsular 'return 0;'
#define retorno return


//declaração da função inicio
funcao inicio();

funcao escreverInteiro(int x);
funcao escreverReal(float x);
funcao escreverDouble(double x);
funcao escreverCadeia(char *x);

funcao lerInteiro(int *x);
funcao lerReal(float *x);
funcao lerDouble(double *x);
funcao lerCadeia(char *x);
funcao leia_padrao(void *x);

funcao limpa();


int main(){

   inicio();

}

funcao escreverInteiro(int x) {
    printf("%d\n", x);
}

funcao escreverReal(float x) {
    printf("%0.2f\n", x);
}

funcao escreverDouble(double x) {
    printf("%lf\n", x);
}

funcao escreverCadeia(char *x) {
    printf("%s\n", x);
}





funcao lerInteiro(int *x){
    scanf("%i", x);
}
funcao lerReal(float *x){
    scanf("%f", x);
}

funcao lerDouble(double *x){
    scanf("%lf", x);
}

funcao lerCadeia(char *x){
    scanf("%s", x);
}

funcao leia_padrao(void *x) {
    printf("Tipo não suportado.\n");
}





funcao limpa(){

}


#endif