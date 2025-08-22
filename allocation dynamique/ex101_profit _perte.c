#include<stdio.h>
#include<stdlib.h>
int main(){
    float *pr=malloc(sizeof(float));
    float *pv=malloc(sizeof(float));
    
    printf("donner le prix de revient: ");
    scanf("%f",pr);
    printf("donner le prix de vente: ");
    scanf("%f",pv);
    if(*pv-*pr>0)printf("profit");
    else if (*pv-*pr<0)  printf("perte");
    else printf("ni perte ni profit");
    free(pv);
    free(pr);
    return 0;
}