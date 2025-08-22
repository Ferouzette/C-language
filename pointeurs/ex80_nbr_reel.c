#include <stdio.h>
int main(){
    float a,b,s,diff,div,*p1,*p2;
    p1=&a;
    p2=&b;
    printf("donner a: ");
    scanf("%f",p1);
    printf("donner b: ");
    scanf("%f",p2);
    s=*p1+*p2;
    diff=*p1-*p2;
    div=*p1/(*p2);
    printf("s= %f\n",s);
    printf("diff= %f\n",diff);
    printf("div= %f\n",div);
    return 0;
}


