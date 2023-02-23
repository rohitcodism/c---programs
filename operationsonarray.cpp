#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int length;
    int size;
};
void swap(int *x,int *y){
    int temp;
    *x = temp;
    *x = *y;
    *y = temp;
}
void Display(struct Array arr){
    int i;
    cout<<"Elements are : "<<endl;
    for(i = 0;i<arr.length;i++)
        cout<<arr.A[i]<<endl;
}
void Append(struct Array *arr,int x){
    if(arr->length<arr->size)
        arr->A[arr->length++] = x;
}
void Insert(struct Array *arr,int index,int x){
    if(index>=0&&index<=arr->length){
        for(int i =arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
            arr->A[index] = x;
            arr->length++;
        }
    }

}
int Delete(struct Array *arr,int index){
    int x;
    int i;
    if(index>=0 && index<=arr->length){
        x = arr->A[index];
        for(i = index;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
            arr->length--;
        }
        return x;
    }
    return 0;
}
int linearsearch(struct Array* arr, int key) {
    int i = 0;
    for (i = 0; i < arr->length; i++) {
        if (key == arr->A[i]) {
            swap(arr->A[i], arr->A[0]);
            return i;
        }
    }
    return -1;
}
int binarysearch(struct Array arr, int key){
    int l,mid,h;
    l = 0;
    h = arr.length;
    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    return -1;
}
int Rbinsearch(int a[],int l,int h,int key){
    int mid;
    if(l<=h){
        mid = (l+h)/2;
        if(key == a[mid]){
            return mid;
        }else if(key < a[mid]){
            return(a,l,mid-1,key);
        }else{
            return(a,mid+1,h,key);
        }
    }
}
int main(){
    struct Array arr = {{2,3,4,5,6},5,10};
    cout<<"The searched element is in : "<<linearsearch(&arr,6)<<endl;
    cout<<"The searched element is in : "<<binarysearch(arr,6)<<endl;
    cout<<"The searched element is in : "<<Rbinsearch(arr.A,0,arr.length,5)<<endl;
     Append(&arr,10);
     Insert(&arr,12,11);
    cout<<Delete(&arr,0);
    Display(arr);
    return 0;
}