#include <stdio.h>
int main(){
    int num, div, pn, resto, mai, men;

    while (1){
        printf("\nDigite o numero, 0 encerra: \n");
        scanf("%d", &num);
        if (num == 0){
            break;
        }

        div = num;
        pn = 1;

        while (div > 0){
            resto = div % 10;
            div /= 10;
            if (pn == 1){
                mai = resto;
                men = resto;
                pn = 0;
            }
            if (resto > mai){
                mai = resto;
            }
            if (resto < men){
                men = resto;
            }
        }

        printf("Menor digito: %d\n", men);
        printf("Maior digito: %d\n", mai);
    }

    return 0;
}