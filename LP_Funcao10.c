#include<stdio.h>

//10. Faça uma função capaz de receber dois números a e b, onde o primeiro sempre é menor  que o segundo,
//e calcula a soma dos números pares compreendidos entre os dois números  lidos.

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
