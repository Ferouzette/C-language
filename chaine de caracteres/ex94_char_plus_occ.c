#include<stdio.h>
#include<string.h>
int occ(char ch[], char c){
    int i,nb=0;
    for (i=0;i<strlen(ch);i++){
        if(ch[i]==c){
            nb+=1;
        }
    }
    return nb;
}
int main(){
    char ch[50];
    int i=0,nb_g_occ,c_occ;
    printf("donner ch= ");
    gets(ch);
    c_occ=ch[0];
    nb_g_occ=occ(ch,ch[0]);
    for(i=1;i<strlen(ch);i++){
        if(occ(ch,ch[i])>nb_g_occ){
            nb_g_occ=occ(ch,ch[i]);
            c_occ=ch[i];
        }
    }
    printf("le caractere dont le nbr d occ est le plus grand est %c",c_occ);

    return 0;
}