#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n=malloc(sizeof(int));
    do{
        printf("donner n: ");
        scanf("%d",n);
    }while(*n<=0);
    int *t=calloc(*n,sizeof(int)),i;
    for (i=0;i<*n;i++){
        printf("t[%d]: ",i+1);
        scanf("%d",t+i);
    }
    int *min=malloc(sizeof(int));
    *min=*t;
    for (i=0;i<*n;i++){
        if (*(t+i)<*min) *min=*(t+i);
    }
    printf("min= %d",*min);
    free(n);
    free(t);
    free(min);
    return 0;
}