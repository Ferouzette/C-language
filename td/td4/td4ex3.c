#include<stdio.h>
int main(){
    int i,n,p,j,aux;
    do{
        printf("donner n= ");
        scanf("%d",&n);
    }while(n<1);
    int t[n];
    for (i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    printf("donner p= ");
    scanf("%d",&p);
    
    for (j=0;j<p;j++){
        aux = t[n-1];
        for (i=n-1;i>0;i--){
            t[i] = t[i- 1];
        }
        t[0]=aux;
    }
    for (i=0;i<n;i++){
        printf("%d\n",t[i]);
    }
    return 0;
}
