#include <stdio.h>
int main(){
    int t[6],*p,i,s=0;
    p=t;
    for (i=0;i<6;i++){
        printf("t[%d]: ",i+1);
        scanf("%d",(p+i));
    }
    for (i=0;i<6;i++){
        s=s+*(p+i);
    }
    printf("s= %d",s);
    return 0;
}