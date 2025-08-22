#include <stdio.h>
#include <string.h>
typedef struct {
    int num1;
    char nom1[31];
    char nas1[4];
}d1;
typedef struct {
    int num2;
    char nom2[31];
    char nas2[4];
}d2;
void lired1(d1 *p){
    printf("donner num1 ");
    scanf("%d",&(p->num1));
    fflush(stdin);
    printf("donner nom1 ");
    fgets(p->nom1, sizeof(p->nom1), stdin);
    p->nom1[strcspn(p->nom1, "\n")] = '\0';
    fflush(stdin);
    printf("donner nas1 ");
    fgets(p->nas1, sizeof(p->nas1), stdin);
    p->nas1[strcspn(p->nas1, "\n")] = '\0';
    fflush(stdin);
    
}
void lired2(d2 *p){
    printf("donner num2 ");
    scanf("%d",&(p->num2));
    fflush(stdin);
    printf("donner nom2 ");
    fgets(p->nom2, sizeof(p->nom2), stdin);
    p->nom2[strcspn(p->nom2, "\n")] = '\0';
    fflush(stdin);
    printf("donner nas2 ");
    fgets(p->nas2, sizeof(p->nas2), stdin);
    p->nas2[strcspn(p->nas2, "\n")] = '\0';
    fflush(stdin);
}
void liretab1(d1 *t1, int *n1){
    int i;
    do{
        printf("donner n1 ");
        scanf("%d",n1);
    }while(*n1<0);
    for(i=0;i<*n1;i++){
        lired1(&t1[i]);
    }
}
void liretab2(d2 *t2, int *n2){
    int i;
    do{
        printf("donner n2 ");
        scanf("%d",n2);
    }while(*n2<0);
    for(i=0;i<*n2;i++){
        lired2(&t2[i]);
    }
}
void affiche(d1 *t1,d2 *t2,int n1,int n2){
    int i,j,ok;
    for(i=0;i<n1;i++){
        j=0;
        ok=0;
        while(j<n2 && ok==0){
            if((strcmp(t1[i].nom1,t2[j].nom2)==0) &&(strcmp(t1[i].nas1,t2[j].nas2)==0)){
                printf("%s ",t1[i].nom1);
                printf("%s",t1[i].nas1);
                printf("\n");
                ok=1;
            }else{
                j++;
            } 
            
        }
    }
}
int main(){
    d1 t1[50];
    d2 t2[50];
    int n1,n2;
    liretab1(t1,&n1);
    liretab2(t2,&n2);
    printf("les joueurs qui participent a la fois aux deux diciplines sont:\n");
    affiche(t1,t2,n1,n2);
    return 0;
}