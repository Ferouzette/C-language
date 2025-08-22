#include<stdio.h>
#include<stdlib.h>
void tricorr(int t[],int n){
    int *p1,*p2,aux;
    for(p1=t;p1<t+n;p1++){
        for(p2=p1+1;p2<n+t;p2++){
            if(*p1>*p2){
                aux=*p1;
                *p1=*p2;
                *p2=aux;
            }

        }

    }
}
int main (){

    int i,n,*p1;
    

    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    
    int *t=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("t[%d]: ",i+1);
        scanf("%d",t+i);
    }
    tricorr(t,n);
    p1=t;
    for(p1=t;p1<t+n;p1++){
        printf("%d ",*p1);}
    free(t);
    return 0;
}