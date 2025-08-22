#include <stdio.h>
int prem(int n){
    int i=2;
    while (i<=(n/2)){
        if (n%i==0){
            return 0;
        }else i++;
    }
    return 1;
}
int main(){
    int n;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    int t[n],i=0,j=2;
    while(i<n){
        if(prem(j)){
            t[i]=j;
            i++;
            j++;
        }else j++;  
    }
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    return 0;
}