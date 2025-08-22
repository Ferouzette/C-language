#include <stdio.h>

void supprimer(int *T, int *n, int X) {
    int *P1 , *P2 ;
    /*Hassan el bahi*/
    P2=T;
    /*for (P1=T;P1<T+ *n;P1++){
        *P2 = *P1;
        if (*P2 != X) P2++;
    }
    *n = P2 - T;*/
    /*Gemini*/


    while (P2 <T+ *n) {
        if (*P2 != X) {
            *P1 = *P2;
            P1++;
        }
        P2++;
    }
    *n = P1 - T;
}

int main() {
    int X, n;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int T[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    printf("Entrez la valeur a supprimer : ");
    scanf("%d", &X);

    supprimer(T, &n, X);

    printf("Tableau apres suppression :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}