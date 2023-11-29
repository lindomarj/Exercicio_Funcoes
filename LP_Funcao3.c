#include<stdio.h>

//3. Crie uma função capaz de receber 1 número n qualquer e imprimir todos os números de 1  a n.

void impressaoNumero(int n){
    int i;
    for(i=1; i<=n; i++){
        printf("%d\n",i);
    }
}

int main () {

    int a;
    scanf("%d",&a);
    impressaoNumero(a);
    return 0;
}
