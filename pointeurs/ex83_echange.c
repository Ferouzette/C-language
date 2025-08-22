#include <stdio.h>
void echange(int *a,int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
int som(int *a, int *b){
    int s;
    s=*a+*b;
    return s;
}
int prod(int *a, int *b){
    int p;
    p=*a*(*b);
    return p;
}
int main(){
    int a,b,*p1,*p2,s,p;
    p1=&a;
    p2=&b;
    printf("donner a: ");
    scanf("%d",p1);
    printf("donner b: ");
    scanf("%d",p2);
    if(*p1>=0 && *p2>=0){
        echange(p1,p2);
        printf("a= %d\n",*p1);
        printf("b= %d\n",*p2);
    }else{
        s=som(p1,p2);
        p=prod(p1,p2);
        printf("a= %d\n",s);
        printf("b= %d\n",p);
    }






    return 0;
}