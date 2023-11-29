#include<stdio.h>

//7. Faça uma função capaz de receber 3 números e retornar a soma do maior com o menor  número.//

int somaMaiorMenor(int a, int b, int c){
    int maior, menor, soma;
    if(a>b && a>c){
        maior = a;
    }else if(b>a && b>c){
        maior = b;
    }else {
    maior = c;
    }
    if(a<b && a<c){
        menor = a;
    }else if(b<a && b<c){
        menor = b;
    }else {
    menor = c;
    }
    soma = maior + menor;
    return soma;
}

int main () {
    int a, b, c, result;
    scanf("%d %d %d",&a, &b, &c);
    result = somaMaiorMenor(a, b, c);
    printf("%d\n",result);

    return 0;
}
