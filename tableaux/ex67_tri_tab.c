/*tri d un tab dans l ordre croissant*/
#include<stdio.h>
void tri(int t[], int n){
    int j,i,p;
    for(i=1;i<n;i++){
        p=t[i];
        j=i;
        while(j-1>=0&& p<t[j-1]){
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
    tri(t,n);
    for (i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    return 0;
}