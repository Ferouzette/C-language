#include<stdio.h>
#include<string.h>
void supprime(char *ch){
    int i=0,j=0;
    while(ch[i]!='\0'){
        if(i==0||ch[i]!=ch[i-1]){
            ch[j++]=ch[i];
        }
        i++;
    }
    ch[j]='\0';
}
int main (){
    char ch[50]="aab  bcddefgg ";
    printf("la chaine avant suppression est %s\n",ch);
    supprime(ch);
    printf("la chaine apres suppression est %s\n",ch);
    return 0;
}