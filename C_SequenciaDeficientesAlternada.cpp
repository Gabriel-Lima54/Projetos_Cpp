#include <stdio.h>
int main(){
    int max, cont = 1, somad, div, den = 2, nb = 0, nc = 0, dena = 0;
    float soma = 0;

    printf("Digite o numero de termos: ");
    scanf("%d", &max);
    printf("0 / 2 - ");

    while (cont < max){
        somad = 0;
        for (div=1;div<=den/2;div++){
            if (den % div == 0){
                somad += div;
            }
        }

        if (somad < den){
            nb = den;
            nc = den + dena;
            dena = den;

            if (nb % 2 == 0){
                soma += float(nc) / nb;
                printf("%d / %d - ", nc, nb);
            }
            else{
                soma -= float(nc) / nb;
                printf("%d / %d +", nc, nb);
            }
            cont++;
        }
    }

    printf(" = %.2f", soma);

    return 0;
}