#include<stdio.h>

void getminmax(int t[],int binf,int bsup,int *imin,int *imax){
    int i;
    *imin=binf;
    *imax=binf;
    for(i=binf;i<=bsup;i++){
        if(t[i]<t[*imin]){
            *imin=i;
        }else *imax=i;
    }
}

void permute(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void triminmax(int t[],int n){
    int imax,imin;
    for (int i = 0; i < n / 2; i++) {
        getminmax(t, i, n - i - 1, &imin, &imax);
        permute(&t[i], &t[imin]);
        permute(&t[n - i - 1], &t[imax]);
    }
    }

int main(){
    int i,n;
    do{
        printf("donner n= ");
        scanf("%d",&n);
    }while(n<1);
    int t[n];
    for(i=0;i<n;i++){
        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);
    }
    triminmax(t,n);
    for(i=0;i<n;i++){
        printf("%d\n",t[i]);
    }

    return 0;
}