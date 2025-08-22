#include<stdio.h>
int main(){
    int i,n,ideb,nbgrd=0,nb,idebgrd=-1,ifingrd=-1,nbrsq=0;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<1);
    int t[n];
    for (i=0;i<n;i++){
        printf("t[%d]= ",i+1);
        scanf("%d",&t[i]);
    }
    i=0;
    while(i<n){
        ideb=i;
        nb=1;
        while(i<n &&t[i+1]>=t[i]){
            nb+=1;
            i++;
        }
        nbrsq+=1;
        if(nb>nbgrd){
            nbgrd= nb;
            idebgrd=ideb;
            ifingrd=i;
        }
        i++;
    
    }
    printf("nbr sous seq= %d",nbrsq);
    printf("indice deb = %d et indice fin = %d",idebgrd,ifingrd);
    return 0;
}