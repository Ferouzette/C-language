#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    float *t=calloc(n,sizeof(float));
    float moy,s=0;
    for(i=0;i<n;i++){
        printf("t[%d]: ",i+1);
        scanf("%f",(t+i));
    }
    for(i=0;i<n;i++){
        s=s+*(t+i);
    }
    moy=s/(n);
    printf("moy= %.2f\n",moy);
    char rep;
    printf("souhaitez vouz ajouter d autres elements (O/N): ");
    scanf(" %c",&rep);

    while(rep=='O'){
        int a;
        do{
            printf("donner le nbr d elements a ajouter: ");
            scanf("%d",&a);
        }while(a<=0);
        t=realloc(t,n*sizeof(float));
        for(i=0;i<n;i++){
            printf("t[%d]: %.2f\n",i+1,*(t+i));
        }
        for(i=0;i<a;i++){
            printf("t[%d]:",i+n+1);
            scanf("%f",(t+i+n+1));
        }
        for(i=0;i<a;i++){
            s=s+*(t+i+n+1);
        }
        moy=s/(n+a);
        printf("moy= %.2f\n",moy);
        printf("souhaitez vouz ajouter d autres elements (O/N): ");
        scanf(" %c",&rep);      
    }
    free(t);




    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    float *t=calloc(n,sizeof(float));
    float moy,s=0;
    for(i=0;i<n;i++){
        printf("t[%d]: ",i+1);
        scanf("%f",(t+i));
    }
    for(i=0;i<n;i++){
        s=s+*(t+i);
    }
    moy=s/(n);
    printf("moy= %.2f\n",moy);
    char rep;
    printf("souhaitez vouz ajouter d autres elements (O/N): ");
    scanf(" %c",&rep);

    while(rep=='O'){
        int a;
        do{
            printf("donner le nbr d elements a ajouter: ");
            scanf("%d",&a);
        }while(a<=0);
        n=n+a;
        t=realloc(t,n*sizeof(float));
        for(i=0;i<n-a;i++){
            printf("t[%d]: %.2f\n",i+1,*(t+i));
        }
        for(i=n-a;i<n;i++){
            printf("t[%d]:",i+1);
            scanf("%f",(t+i));
        }
        for(i=n-a;i<n;i++){
            s=s+*(t+i);
        }
        moy=s/(n);
        printf("moy= %.2f\n",moy);
        printf("souhaitez vouz ajouter d autres elements (O/N): ");
        scanf(" %c",&rep);      
    }
    free(t);




    return 0;
}*/