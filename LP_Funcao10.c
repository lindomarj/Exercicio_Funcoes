#include<stdio.h>

//10. Fa�a uma fun��o capaz de receber dois n�meros a e b, onde o primeiro sempre � menor  que o segundo,
//e calcula a soma dos n�meros pares compreendidos entre os dois n�meros  lidos.

int somaDosPares(int a, int b){
    int i, soma=0;
    for(i=a; i<=b; i++){
        if(i%2==0){
            soma = soma+i;
        }
    }
    return soma;
}

int main () {
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = somaDosPares(a, b);
    printf("%d\n", result);
}
