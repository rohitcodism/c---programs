#include<iostream>
using namespace std;
struct Array{
    int A[10];
    int B[10];
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
int get(struct Array arr,int index){
    int i;
    for(i = 0;i<arr.length;i++){
        if(index >= 0 && index<arr.length){
            if(index == i){
                return arr.A[i];
            }
        }
    }
    return -1;
}
void set(struct Array *arr,int index,int x){
    if(index >= 0 && index < arr->length){
        arr->A[index] = x;
    }
}
int max(struct Array arr){
    int x = -32768;
    for(int i = 0;i<arr.length;i++){
        if(arr.A[i]>x){
            x = arr.A[i];
        }
    }
    return x;
}
int min(struct Array arr){
    int x = arr.A[0];
    for(int i = 1;i<arr.length;i++){
        if(arr.A[i]<x){
            x = arr.A[i];
        }
    }
    return x;
}
int sum(struct Array *arr){
    int s = 0;
    for(int i = 0;i<arr->length;i++){
        s+=arr->A[i];
    }
    return s;
}
float avg(struct Array arr){
    int den = 0;
    float avg;
    for(int i = 0;i<arr.length;i++){
        den++;
    }
    avg = sum(&arr)/den;
    return (float) avg;
}
void Reverse(struct Array *arr){
    int *B;
    int i,j;
    B = new int[arr->length];
    for(i = arr->length-1,j = 0;i>=0;i--,j++){
        B[j] = arr->A[i];
    }
    for(i = 0;i<arr->length;i++){
        arr->A[i] = B[i];
    }
}
void reverse2(struct Array *arr){
    int i,j;
    for(i = 0,j = arr->length-1;i<j;i++,j--){
        swap(&arr->A[i],&arr->A[j]);
    }
}void shift(struct Array *arr){
    char s,l,r;
    cout<<"Enter the way you want to shift : "<<endl;
    cin>>s;
    if(s == 'l'){
    for(int i = 0;i<arr->length;i++){
        arr->A[i-1] = arr->A[i];
    }
    arr->A[arr->length-1] = 0;
  }else if(s == 'r'){
    for(int i = arr->length-1;i>=0;i--){
        arr->A[i+1] = arr->A[i];
    }
    arr->A[0] = 0;
  }
}
// void Rotate(struct Array *arr){
//     for(int i = 0;i<arr->length;i++){
//         arr->A[i-1] = arr
//     }
// }
void sort(struct Array *arr){
    int j = 0;
    for(int i = 1;i<arr->length;i++){
        if(arr->A[i-1]<arr->A[i]){
            j++;
        }else{
            break;
        }
    }
    if(j == arr->length-1){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"unsorted"<<endl;
    }
}
// struct Array* Merge(struct Array *arr,struct Array *Arr){
//     int i = 0,j = 0,k = 0;
//   int *C = new int[arr->size+Arr->size];
//   while(i<arr->length && j<Arr->length){
//     if(arr->A[i]<Arr->B[j]){
//         C[k++] = arr->A[i++];
//     }else{
//         C[k++] = Arr->B[j++];
//     }
//     for( ;i<arr->length;i++){
//         C[k++] = arr->A[i];
//     }
//     for( ;j<Arr->length;i++){
//         C[k++] = Arr->B[j];
//     }
//   }
  
// }
struct Array* Merge(struct Array *arr1,struct Array *arr2){
    int i = 0 , j = 0 , k = 0;
    struct Array *arr3 =(struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
        }else{
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for( ;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }
    for( ;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}
struct Array* Union(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while(arr1->length && arr2->length){
        if(arr1->A[i]<arr2->B[j]){
            arr3->A[k++] = arr1->A[i++];
        }else if(arr1->A[i]>arr2->B[j]){
            arr3->A[k++] = arr2->B[j++];
        }else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for( ;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }
    for( ;j<arr2->length;j++){
        arr3->A[k++] = arr2->B[j++];
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
struct Array* Intersection(struct Array *arr,struct Array *Arr){
    int i,j,k;
    i = j = k = 0;
    struct Array *arr2 = (struct Array *)malloc(sizeof(struct Array));
    while(i < arr->length && j < Arr->length){
        if(arr->A[i] < Arr->A[j]){
            i++;
        }else if(arr->A[i] > Arr->A[j]){
            j++;
        }else if(arr->A[i] == arr->A[j]){
            arr2->A[k++] = arr->A[i++];
            j++;
        }
    }
    arr2->length = k;
    arr2->size = 10;
    return arr2;

}
int main(){
    struct Array arr1 = {{2,6,10,15,25},5,10};
    struct Array arr2 = {{3,6,7,15,20},5,10};
    struct Array *arr3;
    // cout<<"The searched element is in : "<<linearsearch(&arr,6)<<endl;
    // cout<<"The searched element is in : "<<binarysearch(arr,6)<<endl;
    // cout<<"The searched element is in : "<<Rbinsearch(arr.A,0,arr.length,5)<<endl;
    // cout<<"The element in the searched index and the index is respectively : "<<get(arr,2)<<endl;
    // cout<<"max value in this Array : "<<max(arr)<<endl;
    // cout<<"min value in this array : "<<min(arr)<<endl;
    // cout<<"sum of all the elements in this array : "<<sum(&arr)<<endl;
    // cout<<"Avarage of all the elements in this Array : "<<avg(arr)<<endl;
    //    Reverse(&arr);
    //    reverse2(&arr);
    //  Append(&arr,10);
    //  Insert(&arr,12,11);
    // cout<<Delete(&arr,0);
    // shift(&arr);
    // sort(&arr);
    //cout<<Merge(&arr1,&arr2)<<endl;
    // arr3 = Union(&arr1,&arr2);
    // arr3 = Merge(&arr1,&arr2);
    arr3 = Intersection(&arr1,&arr2);
    Display(*arr3);
    return 0;
}