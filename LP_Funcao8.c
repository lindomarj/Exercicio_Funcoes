#include<stdio.h>

//8. Supondo um empr�stimo no valor de c Reais, por m meses a juros de t% ao m�s,//
//crie  uma fun��o capaz de descobrir os juros cobrados nesse empr�stimo. //
//A f�rmula para  c�lculo dos juros simples � a que se segue: j = c * m * t.//


double jurosCobrados(double c, double m, double t){
    double juros;
    juros = c*m*t;
    return juros;
}

int main () {
    double c, m, t, result;
    scanf("%lf %lf %lf", &c, &m, &t);
    result = jurosCobrados(c, m, t);
    printf("%.2lf\n", result);
    return 0;
}
