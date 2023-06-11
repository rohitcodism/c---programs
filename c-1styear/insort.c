#include<stdio.h>
void inSort(int a[], int n){
    int i,j,x;
    for(i = 1;i<n;i++){
        j = i-1;
        x = a[i];
        while(j> -1  && a[j]>x){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}
int main(){
    int a[] = {-2,-11,-13,15,4};
    inSort(a,5);
    printf("The array is : ");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
    
}