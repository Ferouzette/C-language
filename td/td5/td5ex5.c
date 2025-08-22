#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int verif(char *s1){
    int i=0;
    int len=strlen(s1);
    while(i<len){
        if(s1[i]!='0'&& s1[i]!='1'){
            return 0;
        }
        i++;
    }
    return 1;
}
void compresser(char *s1,char *s2){
    int i=0,j=0,nb;
    int len=strlen(s1);
    while(i<len){
        char c=s1[i];
        nb=0;
        while(i<len&&s1[i]==c){
            nb++;
            i++;
        }
        j += sprintf(&s2[j], "%d %c#", nb, c);
        
    }
    s2[j]='\0';
}
int main(){
    char s1[50],s2[300];
    do{
        puts("donner s1= ");
        fgets(s1,sizeof(s1),stdin);
        s1[strcspn((s1),"\n")]='\0';

        
    }while(verif(s1)==0);
    compresser(s1,s2);
    printf("la chaine apres compression est %s",s2);
    return 0;
}
