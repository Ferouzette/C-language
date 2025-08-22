#include <stdio.h>
int main(){
    int n,x,i;
    
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<0);
    int t[n],*p=t,*p1=t,*p2=t;
    for(i=0;i<n;i++){
        printf("donner t[%d]: ",i+1);
        scanf("%d",p+i);
    }
    printf("donner x: ");
    scanf("%d",&x);
    while(p2<t+n){
        if(*p2!=x){
            *p1=*p2;
            p1++;
        }
        p2++;
    }
    n=p1-t;
    printf("le tableau apres suppression des redandances de %d sera:\n",x);
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}