#include <stdio.h>
int main(){
    int i, num, primo, flagp = 0, j, ant, sp = 1, oc = 1;
    for (i=1;i<=10;i++){
        printf("\nDigite o num:\n");
        scanf("%d", &num);
        primo = 1;
        if (num < 2){
            primo = 0;
        }
        else{
            for (j=2;j*j<=num;j++){
                if (num % j == 0){
                    primo = 0;
                    break;
                }
            }
        }
        if (primo == 1 && flagp == 0){
            ant = num;
            flagp = 1;
            sp = 0;
        }
        if (primo == 1){
            if (ant <= num){
                ant = num;
            }
            else{
                oc = 0;
            }
        }
    }
    if (sp == 1){
        printf("\nNao haviam numeros primos");
    }
    else if (sp == 0 && oc == 0){
        printf("\nOs primos nao estavam em ordem crescente");
    }
    else if (flagp == 1 && oc == 1){
        printf("\nOs primos estao em ordem crescente");
    }

    return 0;
}