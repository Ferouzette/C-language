#include<stdio.h>
void tri(int *t, int n){
    int j,i,p;
    for(i=1;n-1;i++){
        p=t[i];
        j=i;
        while(j-1>=0|| p<t[j-1]){
            t[j]=t[j-1];
            j=j-1;
        }
        t[j]=p;

    }
}
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
    int tp[n],tip[n],j=0,k=0;
    for (i=0;i<n;i++){
        if(t[i]%2==0){
            tp[j]=t[i];
            j++;
        }else{
            tip[k]=t[i];
            k++;
        }
    }
    printf("t pair:\n");
    for(i=0;i<j;i++){
        printf("%d ",tp[i]);
    }
    printf("\nt impair:\n");
    for(i=0;i<k;i++){
        printf("%d ",tip[i]);
    }
    return 0;
}