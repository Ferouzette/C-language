#include<stdio.h>
#include<string.h>
int main(){
    char ch[50],chinv[50];
    int i,j=0;
    printf("donner ch= ");
    gets(ch);
    for(i=strlen(ch)-1;i>=0;i--){
        chinv[j]=ch[i];
        j++;
    }
    chinv[j] = '\0';
    printf("la chaine inversee est %s",chinv);
    return 0;
    
}