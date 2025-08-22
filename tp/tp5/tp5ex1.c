#include<stdio.h>
#include<string.h>
char *mirroir(char *ch){
    char ch1[50];
    int i,j=0;
    for (i=strlen(ch)-1;i>=0;i--){
        ch1[j]=ch[i];
        j++;
    }
    ch1[j]='\0';
    strcpy(ch,ch1);
    return ch;
}
int main(){
    char ch[50];
    printf("donner ch=");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    printf("la chaine renversee est %s",mirroir(ch));

    return 0;
}