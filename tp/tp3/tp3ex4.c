#include <stdio.h>
int main(){
    int t[4][4],i,j,k,max,pmin;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("donner t[%d][%d]: ",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",t[i][j]);
        }
        printf("\n");
    }
    printf("les elements cherches sont: ");
    for(k=0;k<3;k++){
        max=t[k][0];
        pmin=0;
        for(i=1;i<3;i++){
            if(t[k][i]>max){
                max=t[k][i];
                pmin=i;
            }
        }
        for(j=0;j<3;j++){
            if(t[j][pmin]<max){
                max=t[j][pmin];
            }
        }
        printf("%d \n",max);
    }

    return 0;
}