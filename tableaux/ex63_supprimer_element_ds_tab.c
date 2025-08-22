#include<stdio.h>

int main (){
    int n;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<0);
    int t[n],i;
    for(i=0;i<n;i++){
        printf("donner t[%d]: ",i+1);
        scanf("%d",&t[i]);
    }
    int p;
    do{
        printf("donner p: ");
        scanf("%d",&p);
        if (n<p ||p<0){
            printf("position invalide\n");
        }
    }while(n<p ||p<0);
    for (i=p;i<n-1;i++){
        t[i]=t[i+1];
    }
    
    for (i=0;i<n-1;i++){
        printf("%d ",t[i]);
    }
    return 0;
}