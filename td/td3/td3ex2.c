#include<stdio.h>
void calcul(int n,int *s,int *p){
    while(n!=0){
        if((n%10)%2==0){
            *s=*s+(n%10);
        }else{
            *p=*p*(n%10);
        }
        n=n/10;
    }}
int main(){
    int n,s=0,p=1;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<0);
    calcul(n,&s,&p);
    printf("s=%d\np=%d\n",s,p);
    return 0;
    }
    

