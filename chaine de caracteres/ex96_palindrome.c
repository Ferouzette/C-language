#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    int i,j;
    printf("donner ch= ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    i=0;
    j=strlen(ch)-1;
    while(i<j){
        if(ch[i]!=ch[j]){
            printf("non palindrome");
            return 0;
        }else{
            i++;
            j--;}  
    }
    printf("palindrome");
    return 0;
}
/*int main() {
    char M[100];
    char R[100];

    printf("Veuillez saisir une chaine : ");
    fgets(M, sizeof(M), stdin);
    // Supprimer le caractère de nouvelle ligne si présent
    M[strcspn(M, "\n")] = '\0';

    strcpy(R, M);
    strrev(R);

    int n = strcmp(R, M);

    if (n == 0) {
        printf("La chaine est un palindrome\n");
    } else {
        printf("La chaine n'est pas un palindrome\n");
    }

    return 0;
}*/