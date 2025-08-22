#include <stdio.h>
#include <string.h>

void replace(char *S, const char *w1, const char *w2) {
    char temp[1024];  // Un tableau temporaire pour stocker la chaîne modifiée
    int i = 0, j = 0;
    int lenS = strlen(S);
    int lenW1 = strlen(w1);
    int lenW2 = strlen(w2);

    while (i < lenS) {
        // Vérifier si la sous-chaîne à partir de i correspond à w1
        if (strncmp(&S[i], w1, lenW1) == 0) {
            // Si oui, on remplace w1 par w2 dans temp
            strcpy(&temp[j], w2);
            j += lenW2;
            i += lenW1;
        } else {
            // Sinon, on copie le caractère actuel de S dans temp
            temp[j++] = S[i++];
        }
    }
    temp[j] = '\0';  // N'oublions pas de terminer la chaîne modifiée par '\0'

    // Copier la chaîne modifiée dans S
    strcpy(S, temp);
}

int main() {
    char S[1024] = "ab  ab fgh";  // Chaîne d'exemple
    const char *w1 = "ab";  // Séquence à remplacer
    const char *w2 = "abab";  // Séquence de remplacement

    printf("Chaîne avant remplacement : %s\n", S);

    // Appeler la fonction pour remplacer w1 par w2
    replace(S, w1, w2);

    printf("Chaîne après remplacement : %s\n", S);

    return 0;
}


