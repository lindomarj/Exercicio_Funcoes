#include<stdio.h>

//6. Faça uma função capaz de receber dois números b e h que representam os lados de um  retângulo ou quadrado, e retornar 1 se ele for um quadrado ou 0 se for um retângulo.//

int quadradoOuRetangulo(int b, int h){
    int resposta;
    if(b == h){
        resposta = 1;
    }else {
        resposta = 0;
    }
    return resposta;
}

int main () {
    int b, h, result;
    scanf("%d %d",&b, &h);
    result = quadradoOuRetangulo(b, h);
    printf("%d\n", result);

    return 0;
}
