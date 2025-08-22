#include <stdio.h>
int f;
int min(int n,int m){
    if(n<m){
        f=n;
    }else{
        f=m;
    }
    return f;

}
int main() {
    int i, n, m;
    float tgr1[50],tgr2[50],tamphi[100];

    do {
        printf("Donner n : ");
        scanf("%d", &n);
    } while (n < 0 || n > 50);

    
    do {
        printf("Donner m : ");
        scanf("%d", &m);
    } while (m < 0 || m > 50);

    

    printf("donner tgr1[1]");
    scanf("%f",&tgr1[0]);

    for(i=1;i<n;i++){
        do{
            printf("donner tgr1[%d]",i+1);
            scanf("%f",&tgr1[i]);
        }while(tgr1[i]<tgr1[i-1]);
    }

    printf("donner tgr2[1]");
    scanf("%f",&tgr2[0]);

    for(i=1;i<m;i++){
        do{
            printf("donner tgr2[%d]",i+1);
            scanf("%f",&tgr2[i]);
        }while(tgr2[i]<tgr2[i-1]);  
    }
   
    /*for(i=0;i<min(n,m);i++){
        if (tgr2[i]<tgr1[i]){
            tamphi[i]=tgr2[i];
        }else{
            tamphi[i]=tgr1[i];
        } }
    if (min(n,m)==m){
        for(i=0;i<m;i++){
            if (tamphi[i]>tgr2[i]){
                tamphi[i]=tgr2[i];
            } 

            }

    }
    if (min(n,m)==n){
        for(i=0;i<n;i++){
            if (tamphi[i]>tgr1[i]){
                tamphi[i]=tgr1[i];
            } 

            }
        
    }*/
    
    for (i = 0; i<n+m ; i++) {
        printf("%f ", tamphi[i]);
    }

    return 0;

}
#include <stdio.h>

void merge_and_sort(float arr1[], int n1, float arr2[], int n2, float merged_arr[]) {
    int i = 0, j = 0, k = 0;

    // Merge both arrays into merged_arr, comparing elements from each array
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged_arr[k] = arr1[i];
            k=k+1;
            i=i+1;
        } else {
            merged_arr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1, if any
    while (i < n1) {
        merged_arr[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2, if any
    while (j < n2) {
        merged_arr[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    float arr1[n1];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%f", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    float arr2[n2];
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%f", &arr2[i]);
    }

    int merged_size = n1 + n2;
    float merged_arr[merged_size];

    merge_and_sort(arr1, n1, arr2, n2, merged_arr);

    printf("Merged and sorted array:\n");
    for (int i = 0; i < merged_size; i++) {
        printf("%.2f ", merged_arr[i]);
    }

    printf("\n");

    return 0;
}