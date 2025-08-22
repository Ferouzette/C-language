#include<stdio.h>
int somdiv(int n){
    int i=2,s=0;
    while(i<=(n/2)){
        if(n%i==0){
            s=s+i;
        }
        i++;
    }
    return s;

}
int main(){
    int n,m;
    
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<0);
    do{
        printf("donner m: ");
        scanf("%d",&m);
    }while(m<0);
    if(somdiv(n)==m && somdiv(m)==n){
        printf("amis");
    }else{
        printf("non amis");
    }

    return 0;
}