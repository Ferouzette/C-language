#include <stdio.h>
int main(){
    int t[4],*p,min,i;
    p=t;
    for (i=0;i<4;i++){
        printf("t[%d]: ",i+1);
        scanf("%d",(p+i));
    }
    min=*p;
    for (i=1;i<4;i++){
        if(*(p+i)<min){
            min=*(p+i);
        }
    }
    printf("min= %d",min);
    return 0;
}