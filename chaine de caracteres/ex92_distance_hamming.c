#include<stdio.h>
#include<string.h>
int main(){
    char c1[50],c2[50];
    int i,h=0;
    
   do{
        printf("donner c1= ");
        gets(c1);
        printf("donner c2= ");
        gets(c2);
    }while(strlen(c1)!=strlen(c2));
    for(i=0;i<strlen(c1);i++){
        if(c1[i]!=c2[i]){
            h+=1;
        }
    }
    printf("h= %d",h);
    return 0;
}