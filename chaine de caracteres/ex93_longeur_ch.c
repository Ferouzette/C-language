#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    int l=0,i=0;
    printf("donner ch= ");
    gets(ch);
    while(ch[i]!='\0'){
        l+=1;
        i++;
    }
    printf("l= %d",l);
    return 0;
}