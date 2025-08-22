#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char ch1[50],ch2[50],ch[100],*p1,*p2;
    int i;
    p1=&ch1[0];
    p2=&ch2[0];
    printf("donner ch1= ");
    fgets(ch1, sizeof(ch1), stdin);
    ch1[strcspn(ch1, "\n")] = '\0';
    printf("donner ch2= ");
    fgets(ch2, sizeof(ch2), stdin);
    ch2[strcspn(ch2, "\n")] = '\0';
    for(i=0;i<(int)strlen(ch1);i++){
        ch[i]=p1[i];
    }
    for(i=0;i<(int)strlen(ch2);i++){
        ch[i+(int)strlen(ch1)]=p2[i];
    }
    printf("ch= %s",ch);
    /*char A[100];
    char B[100];
    char *PA = A;
    char *PB = B;

    printf("Entrer la premiere chaine: ");
    gets(A);

    printf("Entrer la deuxieme chaine: ");
    gets(B);

    PA = PA + strlen(A);

    while (*PB != '\0') {
        *PA = *PB;
        PA++;
        PB++;
    }

    *PA = '\0';

    printf("La chaine concatenee est: %s", A);*/
    return 0;
}