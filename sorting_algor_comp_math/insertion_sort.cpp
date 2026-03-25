#include<iostream>
void insertion_sort(int arr[], int n);
void display(int arr[], int n);
int main(){
    int arr[] = {9 , 12 , 84 ,68 , 0 , 48 , 27 , 84 , 75 , 93};
    int num = sizeof(arr)/ sizeof(arr[0]);
    insertion_sort(arr , num);
    display(arr , num);


    return 0;
}
void insertion_sort(int arr[], int n){
    for(int i = 1; i<n ; ++i){
        int key = arr[i];
        int j = i - 1;

          while (j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j = j-1;
    }
    arr[j+1] = key;
    }   
}
void display(int arr[], int n ){
    for(int i = 0; i<n ; ++i){
        std::cout<<arr[i]<<" ";
    }
}