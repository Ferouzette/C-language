#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    int *t=(int*)malloc(n*sizeof(int)),i;
    /* *t=malloc(n*sizeof(int))*/
    for(i=0;i<n;i++){
        printf("t[%d]: ",i+1);
        scanf("%d",(t+i));
    }
    int s=0;
    float moy;
    for (i=0;i<n;i++){
        s=s+*(t+i);
    }
    moy=s/n;
    printf("s= %d\n",s);
    printf("moy= %f",moy);

    free(t);
    return 0;
}