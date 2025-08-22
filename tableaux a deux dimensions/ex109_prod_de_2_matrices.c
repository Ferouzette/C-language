#include<stdio.h>
int main (){
    int a[3][4],b[4][2],c[3][2],i,j,k,p;
    for(i=0;i<3;i++){
        for (j=0;j<4;j++){
            printf("a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for (j=0;j<2;j++){
            printf("b[%d][%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("a=\n");
    for(i=0;i<3;i++){
        for (j=0;j<4;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("b=\n");
    for(i=0;i<4;i++){
        for (j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("c=\n");
   
    for(i=0;i<3;i++){
        for (j=0;j<2;j++){
            p=0;

            for(k=0;k<4;k++){
                p+=a[i][k]*b[k][j];
            }
            c[i][j]=p;
        }
    }
    for(i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}