#include <stdio.h>

int main() {
    int t[50], n, i, s = 0, pmax, pmin;

    do {
        printf("donner n: ");
        scanf("%d", &n);
    } while (n < 1 || n > 50);

   
    for (i = 0; i < n; i++) {
        printf("donner t[%d]", i+1);
        scanf("%d", &t[i]);
    }



    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");

   
    pmin = pmax = 0;
    for (i = 0; i < n; i++) {
        s += t[i];

        if (t[i] > t[pmax]) {
            pmax = i;
        }

        if (t[i] < t[pmin]) {
            pmin = i;
        }
    }

   
    printf("Somme: %d\n", s);
    printf("Pmax: %d\n", pmax + 1);
    printf("Pmin: %d\n", pmin + 1); 

    for (i = n-1; i >=0; i--) {
        printf("%d ", t[i]);
    }
    return 0;
}