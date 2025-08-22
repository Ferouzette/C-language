#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    do{
        printf("donner n= ");
        scanf("%d",&n);
    }while(n<=0);
    int *t=malloc(n*sizeof(int)),i,*p1,*p2,aux;
    for(i=0;i<n;i++){
        printf("t[%d]=",i+1);
        scanf("%d",t+i);
    }
    for(p1=t;p1<t+n;p1++){
        for(p2=p1+1;p2<t+n;p2++){
            if(*p1>*p2){
                aux=*p1;
                *p1=*p2;
                *p2=aux;
            }
        }

    }
    for(p1=t;p1<t+n;p1++){
        printf("%d\n",*(p1));
    }

    return 0;
}