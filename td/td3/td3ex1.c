#include<stdio.h>
int verif(int n){
    int i;
    i=n% 10;
    while(n!=0){
        if (n % 10>i ){
            return 0;
        }
        n=n/10;
    }
    return 1;
} 
int main(){
    int n;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<0);
    if(verif(n)){
        printf("croissant");
    }else{
        printf("non croissant");
    }
    return 0;
}