#include<stdio.h>
#include<math.h>

//9. Fa�a uma fun��o capaz de receber tr�s n�meros a, b e c, e imprimir as duas ra�zes da  equa��o do segundo grau. //
//Se a fun��o tem apenas uma raiz, imprimir apenas essa raiz. Se  n�o tiver raiz, imprima n�o existem ra�zes. //

int retornoDoDelta(int a, int b, int c){
    int delta;
    delta = (b*b-(4*a*c));
    return delta;
}

void impressaoDeRaiz(double a, double b, double c){
    int delta;
    double raiz, x1, x2, x3;
    delta = retornoDoDelta(a, b, c);
    raiz = (sqrt(delta));
    x1 = ((-b + raiz)/(2*a));
    x2 = ((-b - raiz)/(2*a));
    if(delta < 0){
        printf("nao existem raizes\n");
    }else if(delta == 0){
        x3 = ((-b)/(2*a));
        printf("%lf\n", x3);
    }else{
        printf ("%lf\n%lf\n",x1, x2);
    }
}

int main () {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    impressaoDeRaiz (a, b, c);

    return 0;
}
