#include<stdio.h>

//2. Crie uma função capaz de receber 2 números x e y, e retornar qual dos dois é maior.

int oMaior(int a, int b){
    int maior;
    if(a>b){
        maior = a;
    }else{
        maior = b;
    }
}

int main () {

    int x, y, resultado;
    scanf("%d %d", &x, &y);
    resultado = oMaior(x, y);
    printf("%d\n",resultado);

    return 0;
}
