#include <stdio.h>
int main(){
    int n,*p1,i;
    p1=&n;
    do{
        printf("donner x: ");
        scanf("%d",p1);
    }while(n<=0);
    
    for(i=1;i<(n/2);i++){
        if(*p1%i==0){
            printf("%d\n",i);
        }
    }
    printf("%d",*p1);

    return 0;
}