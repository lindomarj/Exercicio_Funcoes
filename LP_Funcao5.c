#include<stdio.h>

//5. Crie uma função capaz de determinar a soma dos xx primeiros termos de uma P.A.
//A soma  dos �� primeiros termos de uma P.A. é definida pela fórmula a seguir: xxxx = xxx(xx1+xxxx)
//É necessário receber o primeiro elemento, o n-ésimo elemento e o valor de xx.

int nesimo(int primeiroNum, int nesimoNum, int n){
    int Sn;
    Sn = (n*(primeiroNum + nesimoNum)/2);
    return Sn;
}

int main () {
    int a, b ,c, result;
    scanf("%d %d %d",&a, &b, &c);
    result = nesimo(a, b ,c);
    printf("%d\n", result);

    return 0;
}
