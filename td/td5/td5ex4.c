#include <stdio.h>
#include <string.h>

void elimine(char*ch1,char *ch2){
    char c;
    int i=0,j,k=0 ,ok;
    while(i<(int)strlen(ch1)){
        c=ch1[i];
        j=0;
        ok=1;
        while(j<(int)strlen(ch2)&&ok){
            if(ch2[j]==c){
                ok=0;
            }
            j++;
        }
        if(ok==1){
            ch1[k++]=c;
        }
        i++;
    }
    ch1[k]='\0';
}

int main() {
    char ch1[1024] = "bonjour";
    char ch2[1024] = "jour"; 
 

    elimine(ch1,ch2);
    printf("Chaîne après suppression : %s\n", ch1);

    return 0;
}


