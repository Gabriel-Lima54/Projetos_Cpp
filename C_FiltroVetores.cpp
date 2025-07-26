#include <stdio.h>
int main(){
    int i,vl[25],vo[20],igual,va[25],j,x,vt[25],ia = 0;

    printf("Digite o cod dos alunos da leitura:\n");
    for (i=0;i<25;i++){
        scanf("%d", &vl[i]);
        va[i] = 0;
    }

    printf("\nDigite o cod dos alunos de prod. textual:\n");
    for (i=0;i<20;i++) 
        scanf("%d", &vo[i]);

    for (i=0;i<25;i++){
        igual = 0;
        if (va[i] == 0){
            va[i] = 1;
            for (j=i+1;j<25;j++){
                if(vl[i] == vl[j]){
                    va[j] = 1;
                }
            }
            for (x=0;x<20;x++){
                if (vl[i] == vo[x]){
                    igual = 1;
                    break;
                }
            }
            if (igual == 0){
                vt[ia] = vl[i];
                ia++;
            }
        }
    }

    printf("\nAlunos apenas da sessão de leitura:");
    for (i=0;i<ia;i++)
        printf(" %d", vt[i]);

    return 0;
}