#include <stdio.h>
int main(){
    int i = 0,cod[50], liv[50], tex[50], ia = 0, j, aux;
    while (i<50){
        printf("Digite o codigo:\n");
        scanf("%d", &cod[i]);

        if (cod[i] == -1){
            break;
        }

        printf("Digite a quant de livros: ");
        scanf("%d", &liv[i]);

        printf("Digite a quant de textos: ");
        scanf("%d", &tex[i]);

        ia++;
        i++;
    }

    for (i=0;i<ia;i++){
        for (j=0;j<ia-1;j++){
            if (liv[j] < liv[j+1]){
                aux = liv[j]; liv[j] = liv[j+1]; liv[j+1] = aux;
                aux = cod[j]; cod[j] = cod[j+1]; cod[j+1] = aux; 
                aux = tex[j]; tex[j] = tex[j+1]; tex[j+1] = aux;
            }
        }
    }
    for (i=0;i<ia-1;i++){
        if (liv[i] == liv[i+1] && tex[i] < tex[i+1]){
            aux = cod[i]; cod[i] = cod[i+1]; cod[i+1] = aux;
            aux = tex[i]; tex[i] = tex[i+1]; tex[i+1] = aux;
        }
    }
    for (i=0;i<ia-1;i++){
        if (tex[i] == tex[i+1] && liv[i] == liv[i+1] && cod[i] < cod[i+1]){
            aux = cod[i]; cod[i] = cod[i+1]; cod[i+1] = aux;
        }
    }
    printf("\nOs 10 melhores alunos:");
    for (i=0;i<10;i++){
        printf("\n%d - %d - %d", cod[i], liv[i], tex[i]);
    }

    return 0;
}