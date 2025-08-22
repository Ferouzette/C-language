#include<stdio.h>
int main (){
    int a[2][3],b[2][3],c[2][3],i,j;
    for(i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("b[%d][%d]",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("a=\n");
    for(i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("b=\n");
    for(i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("c=\n");
    for(i=0;i<2;i++){
        for (j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}