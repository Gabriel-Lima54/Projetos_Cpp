#include <stdio.h>
int main(){
    int i;
    float v[100], maior = 0, ult = 0;

    printf("Digite os 100 valores:\n");
    for (i=0;i<100;i++){
        scanf("%f", &v[i]);
    }

    maior = v[0];

    for (i=1;i<100;i++){
        if (v[i] > maior){
            maior = v[i];
        }
    }
    while (v[0] != maior){
        ult = v[99];
        for (i=99;i>0;i--){
            v[i] = v[i-1];
        }
        v[0] = ult;
    }

    printf("\nVetor ajustado: ");
    for (i=0;i<100;i++){
        printf("%f ", v[i]);
    }

    return 0;
}