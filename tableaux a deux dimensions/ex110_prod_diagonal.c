#include<stdio.h>
int main (){
    int t[5][5]={{2,3,5,7,8},{0,9,3,7,1},{7,1,3,4,0},{9,8,2,2,4},{0,2,5,4,3}},i,p=0;
    for(i=0;i<5;i++){
        p+=t[i][i];
    }
    printf("p= %d",p);
    return 0;
}