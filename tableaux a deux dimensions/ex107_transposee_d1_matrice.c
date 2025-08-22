#include<stdio.h>
int main (){
    int t[2][3],i,j;
    for(i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("t[%d][%d]",i+1,j+1);
            scanf("%d",&t[i][j]);
        }
    }
    printf("la matrice est:\n");
    for(i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("%d  ",t[i][j]);
        }
        printf("\n");
    }
    printf("la transposee est:\n");
    for(i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("%d  ",t[j][i]);
        }
        printf("\n");
    }



    return 0;
}