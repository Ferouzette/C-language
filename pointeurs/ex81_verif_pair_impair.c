#include <stdio.h>
int main(){
    int x,*p1;
    p1=&x;
    printf("donner x: ");
    scanf("%d",p1);
    if (*p1%2==0){
        printf("pair");
    }else{
        printf("impair");
    }
    return 0;
}