#include<stdio.h>
#include<string.h>
void majmin(char *ch,int *nbmaj,int *nbmin){
    int i;
    char ch1[50];
    *nbmaj=0;
    *nbmin=0;
    for(i=0;i<(int)strlen(ch);i++){
        if ('A'<=ch[i] && ch[i]<='Z'){
            ch1[i]=ch[i]+32;
            (*nbmaj)+=1;
        }else if('a'<=ch[i] && ch[i]<='z'){
            ch1[i]=ch[i]-32;
            (*nbmin)+=1;
        }else ch1[i]=ch[i];

    }
    ch1[i]='\0';
    strcpy(ch,ch1);

}
int main(){
    char ch[50];
    int nbmaj,nbmin;
    printf("donner ch= ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    majmin(ch,&nbmaj,&nbmin);
    printf("la nouvelle chaine est %s\n",ch);
    printf("nbmaj= %d",nbmaj);
    printf("nbmin= %d",nbmin);


    return 0;
}