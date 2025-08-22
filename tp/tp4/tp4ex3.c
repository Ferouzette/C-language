#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    do{
        printf("donner n (la taille du tableau a): ");
        scanf("%d",&n);
    }while(n<=0);
    do{
        printf("donner m (la taille du tableau b): ");
        scanf("%d",&m);
    }while(m<=0);
    int *a=malloc(n*sizeof(int)),*b=malloc(m*sizeof(int)),i,*p1,*p2;
    printf("entrer les elements de a\n");
    for(i=0;i<n;i++){
        printf("a[%d]= ",i+1);
        scanf("%d",a+i);
    }
    printf("entrer les elements de b\n");
    for(i=0;i<m;i++){
        printf("b[%d]= ",i+1);
        scanf("%d",b+i);
    }
    for(p1=a+n,p2=b;p2<b+m;p2++,p1++){
        *p1=*p2;
    }
    n=n+m;
    for(p1=a;p1<a+n;p1++){
        printf("%d\n",(*p1));
    }
    return 0;
}