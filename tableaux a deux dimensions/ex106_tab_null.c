#include<stdio.h>
int main(){
    int t[3][6],i,j;
    printf("le tab est\n");
    for(i=0;i<3;i++){
        for (j=0;j<6;j++){
            t[i][j]=0;
            printf("%d  ",t[i][j]);

        }
        printf("\n");
    }
    return 0;
}