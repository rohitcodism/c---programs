#include<stdio.h>
void swap(int x, int y){
    int temp;
    x = temp;
    x = y;
    y = temp;

}
void bubbleSort(int a[], int n){
    int x,i,j;
    for(i = 0;i<n-1;i++){
        x = 0;
        for(j = 0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                x = 1;
            }
            if(!x){
                printf("Sorted Array");
                break;
            }
        }
    }
}
int main(){
    int a[50],n;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Enter the %dth element : ",i);
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printf("The sorted array is : ");
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}