#include <stdio.h>

//1. Crie uma função capaz de receber 3 números a, b e c, e retornar o delta desses números.

int retornoDoDelta(int d, int e, int f){
    int delta;
    delta = (e*e-(4*d*f));
    return delta;
}

int main () {
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    result = retornoDoDelta(a, b, c);
    printf("%d\n", result);

}
