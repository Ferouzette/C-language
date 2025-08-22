#include <stdio.h>
int main(){
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
    int max1=t[0],max2=t[0];
    for(i=1;i<n;i++){
        if (t[i]>max1){
            max2=max1;
            max1=t[i];
        }
        if(t[i]<max1 && t[i]>max2){
            max2=t[i];

        }
    }
    printf("max1: %d ",max1);
    printf("max2: %d ",max2);
    return 0;
}