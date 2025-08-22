#include <stdio.h>
int main(){
    int n;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    int t[n],*p1,i;
    p1=t;
    for(i=0;i<n;i++){
        printf("t[%d]: ",i+1);
        scanf("%d",(p1+i));
    }
    for(i=n-1;i>=0;i--){
        printf("%d\n",*(p1+i));
    }
    return 0;
}