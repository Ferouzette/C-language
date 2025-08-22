#include<stdio.h>
#include<string.h>
char *concatination(char *ch1,char *ch2, char*ch){
    int n,i,j;
    n=strcmp(ch1,ch2);
    if (n==1){
        strcpy(ch,ch1);
        for(i=(int)strlen(ch1),j=0;j<(int)strlen(ch2);i++,j++){
            ch[i]=ch2[j];
        }
        ch[i]='\0';
    }else if (n==-1){
        strcpy(ch,ch2);
        for(i=(int)strlen(ch2),j=0;j<(int)strlen(ch1);i++,j++){
            ch[i]=ch1[j];
        }
        ch[i]='\0';

    }else{
        strcpy(ch,ch1);
        for(i=(int)strlen(ch2),j=0;j<(int)strlen(ch1);i++,j++){
            ch[i]=ch1[j];
        }
        ch[i]='\0';
    } 
    return ch;
}
int main(){
    char ch1[50],ch2[50],ch[100];
    printf("donner ch1= ");
    fgets(ch1, sizeof(ch1), stdin);
    ch1[strcspn(ch1, "\n")] = '\0';
    printf("donner ch2= ");
    fgets(ch2, sizeof(ch2), stdin);
    ch2[strcspn(ch2, "\n")] = '\0';
    printf("la chaine apres concatination est %s",concatination(ch1,ch2,ch));
    


    return 0;
}