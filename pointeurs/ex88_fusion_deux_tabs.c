#include <stdio.h>
int main(){
    int n,m;
    do{
        printf("donner n: ");
        scanf("%d",&n);
    }while(n<=0);
    do{
        printf("donner m: ");
        scanf("%d",&m);
    }while(m<=0);
    int a[n],b[m],*p1,*p2,i;
    p1=a;
    for(i=0;i<n;i++){
        printf("a[%d]: ",i+1);
        scanf("%d",(p1+i));
    }
    p2=b;
    for(i=0;i<m;i++){
        printf("b[%d]: ",i+1);
        scanf("%d",(p2+i));
    }
  
    for(p1=a+n,p2=b;p2<b+m;p1++,p2++){
        *p1=*p2;
       
    }
    n=n+m;
    for(p1=a;p1<n+a;p1++){
        printf("%d\n",*(p1));}
    return 0;
}