#include<stdio.h>
int main(){
    int m1=2,c1=1,n,i;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<2);
    for(i=2;i<=n;i++){
        
        c1=3*c1+m1;
        m1=2*m1+1;
    }
    printf("%d",c1);
    return 0;
}