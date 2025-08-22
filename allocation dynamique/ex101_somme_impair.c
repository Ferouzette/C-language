#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n=calloc(1,sizeof(int));
    do{
        printf("donner n: ");
        scanf("%d",n);
    }while(*n<=0);
    int *s=calloc(1,sizeof(int)),i;
    *s=0;
    for(i=1;i<=*n;i++){
        if(i%2!=0)*s=*s+i;
    }
    printf("s= %d",*s);
    free(s);
    free(n);
    return 0;
}