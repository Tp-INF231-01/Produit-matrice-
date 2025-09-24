#include<stdio.h>
int main(){
int l,cb,lb,c,i,j;
int Ma[100][100],Mb[100][100],M[100][100];
printf("entre le nombre de ligne et colonne de la matrice A:");
scanf("%d %d",&l,&c);
printf("entre les valeur de la matrice A");
for(i=0; i<l; i++){
for(j=0; j<c; j++){
scanf("%d",&Ma[i][j]);
}
}
printf("entre le nombre de ligne et de colonne de la matrice B:");
scanf("%d %d",&cb,&lb);
printf("entre les valeur de la matrice B:");
for(i=0; i<lb; i++){
for(j=0; j<cb; j++){
scanf("%d",&Mb[i][j]);
}
}
 if (c!=lb) {
        do {
            printf("Erreur ; assurer vous que colA=ligB\n");
            printf("colA= ");
            scanf("%d",&c);
            printf("ligB= ");
            scanf("%d",&lb);
        } while(c!=lb);
    }
printf("voici la matrice A que vous venez d'entre\n");
for(i=0; i<l; i++){
for(j=0; j<c; j++){
printf(" [%d] ",Ma [i] [j]);
}
printf("\n");
}
printf("voici la matrice B que vous venez d'entre\n");
for(i=0; i<lb; i++){
for(j=0; j<cb; j++){
printf(" [%d] ",Mb [i] [j]);
}
printf("\n");
}
for(i=0; i<l; i++){
    for(j=0; j<c; j++){
        for(int k=0; k<cb; k++){
        M[i][j]+=( Ma[i][k]*Mb[k][j] );
        }
    }
}
printf("le produit est:\n");
for(i=0; i<l; i++){
    for(j=0; j<c; j++){
        printf(" [%d] ",M[i][j]);
    }
printf("\n");
}








}
