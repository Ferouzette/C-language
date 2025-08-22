#include<stdio.h>
int main (){
    int t[5][5]={{2,3,5,7,8},{0,9,3,7,1},{7,1,3,4,0},{9,8,2,2,4},{0,2,5,4,3}},i,j,aux;
    for(i=0;i<4;i++){
        for (j=i+1;j<5;j++){
            if(i!=j){
                aux=t[i][j];
                t[i][j]=t[j][i];
                t[j][i]=aux;
            }
            
        }
    }
    for(i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("%d  ",t[i][j]);
        }
        printf("\n");}
    return 0;
}