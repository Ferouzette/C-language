#include<stdio.h>
int main(){
    int i,n;
    char t[50],c;
    int recherche(char t[], int n, char c){
        i=0;
        while(i<n){
            if (t[i]==c){
                return 1;
            }else{
                i+=1;
            }
        }
        return 0;
    }
    do{
        printf("donner n");
        scanf("%d",&n);
    }while(n<0 || n>50);
    for(i=0;i<n;i++){
        printf("donner t[%d]",i+1);
        scanf(" %c",&t[i]);
    }
    for(i=0;i<n;i++){
        printf("%c ",t[i]);
    }
    fflush(stdin);
    printf("donner un caractere que vous desirez le chercher ");
    scanf("%c",&c);
    if (recherche(t,n,c))printf("existe");
    else printf("n existe pas");
    

    return 0;
}