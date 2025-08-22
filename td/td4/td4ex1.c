#include<stdio.h>
#include<stdlib.h>
int occ(int t[],int *n, int x){
    int i,nb=0;
    for (i=0;i<*n;i++){
        if (t[i]==x){
            nb=nb+1;
        }
    }
    return nb;
}
void supprime(int *t,int *n, int p){
    int i;
    for (i=p;i<*n-1;i++){
        t[i]=t[i+1];
    }
    (*n)--;
}

int main (){
    int *n=(int*)malloc(sizeof(int));
    do{
        printf("donner n: ");
        scanf("%d",n);
    }while(*n<0);
    int t[*n],i;
    for(i=0;i<*n;i++){
        printf("donner t[%d]: ",i+1);
        scanf("%d",&t[i]);
    }
    //he4i jawha behi kifma taleb fl ex be4abt 
   /*i = 0;
   int j;
    while (i < *n) {
        j = i + 1; // Comparer les éléments suivants
        while (j < *n) {
            if (t[j] == t[i]) { // Si un doublon est trouvé
                supprime(t, n, j); // Supprimer l'occurrence
            } else {
                j++; // Passer au prochain élément
            }
        }
        i++; // Passer à l'élément suivant
    }*/
    //he4i 5edmti ama tsupprimi l 3ddad ki yo3rre4ha meloul w t5alli kan e5er occ
    for(i=0;i<*n;i++){
        while(occ(t,n,t[i])!=1){
            supprime(t,n,i);
          
        }
    }
    for (i=0;i<*n;i++){
        printf("%d ",t[i]);
    }
    return 0;
}