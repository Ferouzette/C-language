#include <stdio.h>
void saisie(int *n1,int *n2){
    do{
        printf("donner n1: ");
        scanf("%d",&*n1);
    }while(*n1<0);
    do{
        printf("donner n2: ");
        scanf("%d",&*n2);
    }while(*n2<0);
}
int occ(int x,int n){
    int test=0;
    while(n!=0 && test==0){
        if (x==(n%10)){
            test=1;
        }else{
            n=n/10;
        }
    }
    return test;
}
int verif1(int n1, int n2){
    while(n1!=0 ){
        if(occ(n1%10,n2)){
            n1=n1/10;
        }else{
            return 0;
        }
    }
    return 1;
    }
int verif2(int n1, int n2){
    while(n2!=0 ){
        if(occ(n2%10,n1)){
            n2=n2/10;
        }else{
            return 0;
        }
    }
    return 1;
}
int main(){
    int n1,n2;
    saisie(&n1,&n2);
    if(verif1(n1,n2)==1&&verif2(n1,n2)==1){
        printf("freres");
    }else{
        printf("non freres");
    }
    return 0;
}