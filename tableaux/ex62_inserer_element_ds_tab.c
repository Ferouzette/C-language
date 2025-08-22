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
    int v[n+1],x;
    printf("donner x: ");
    scanf("%d",&x);
    for(i=0;i<p;i++){
        v[i]=t[i];
    }
    v[p]=x;
    for(i=0;i<p+1;i++){
        printf("%d ",v[i]);
    }
    for(i=p+1;i<n+1;i++){
        v[p]=t[i-1];
        printf("%d ",v[p]);
    }
    return 0;
}