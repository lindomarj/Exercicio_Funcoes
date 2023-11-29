#include<stdio.h>

//4. Crie uma função capaz de receber 3 números a, b e c e retornar quantos são pares.

void ePar(int a, int b, int c){
    if(a%2==0){
        printf("%d\n",a);
    }
    if(b%2==0){
        printf("%d\n",b);
    }
    if(c%2==0){
        printf("%d\n",c);
    }
}

int main() {

    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    ePar(a, b, c);
    return 0;
}
