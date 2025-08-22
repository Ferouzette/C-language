#include <stdio.h>
int main(){
    int n;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    int t[n],*p,i;
    p=t;
    for (i=0;i<n;i++){
        printf("t[%d]",i+1);
        scanf("%d",(p+i));
    }
    printf("le tab est\n");
    for (i=0;i<n;i++){
        printf("%d\n",*(p+i));

    }
    return 0;
}