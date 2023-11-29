#include<stdio.h>

//11. Faça uma função que receba um número positivo e imprima todos os seus divisores.
//Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

void impressaoDeDivisores(int a){
    int i, ultimo;
    for(i=1; i<a; i++){
        if(a%i==0){
            ultimo = i;
        }
    }
    for(i=1; i<ultimo; i++){
        if(a%i==0){
            printf("%d, ",i);
        }
    }
    if(a>1){
        printf("%d e ",ultimo);
    }
    printf("%d.",a);
}

int main () {
    int a;
    scanf("%d", &a);
    impressaoDeDivisores(a);
}
