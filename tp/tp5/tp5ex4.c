#include<stdio.h>
#include<string.h>
void fonction(char *ch,int n, int *rep, char *adresse){
    int i=0,nb=0,j=0;
    while(ch[i]!='\0'){
        if(ch[i]==' '){
            nb++;
            if(nb==n){
                for(j=0;j<(int)strlen(ch);j++){
                    adresse[j]=ch[i++];
                }
            }
        }
        i++;
    }
    if(nb<n){
        *rep=0;
    }else{
        *rep=1;
    } 
}
int main(){
    int n,rep;
    char ch[50],adresse[50];
    do{
        printf("donner ch= ");
        fgets(ch,sizeof(ch),stdin);
        ch[strcspn((ch),"\n")]='\0';
    }while(ch[strlen(ch)]==' ');
    
    printf("donner n= ");
    scanf("%d",&n);
    fonction(ch,n,&rep,adresse);
    printf("rep= %d\n",rep);
    if(n==0){
        printf("chaine nieme=%s\n",ch);
    }
    if(rep==1 && n!=0){
        printf("chaine nieme=%s\n",adresse);
    }
    
    return 0;
}




