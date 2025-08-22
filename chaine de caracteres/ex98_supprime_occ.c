#include<stdio.h>
#include<string.h>
char* supp_occ(char ch[],char c){
    int i,j=0;
    char ch1[50];
    for(i=0;ch[i]!='\0';i++){
        if (ch[i]!=c){
            ch1[j]=ch[i];
            j++;
        }
    ch1[j]='\0';
    strcpy(ch, ch1);
    }return ch;}
int main(){
    char ch[50],c;
    printf("donner ch= ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    printf("donner c= ");
    scanf("%c",&c);
    printf("ch apres suppression est %s ",supp_occ(ch,c));

    return 0;
}