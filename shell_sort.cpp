#include<iostream>
void shell_sort(int arr[], int n);
void display_arr(int arr[], int n);

int main(){

 int arr[] = {9 , 12 , 84 ,68 , 0 , 48 , 27 , 84 , 75 , 93};
 int num;
 num = sizeof(arr)/ sizeof(arr[0]);

shell_sort(arr, num);
display_arr(arr , num);
    return 0;
}
void shell_sort(int arr[], int n){

    for(int interval = n/2; interval>0; interval /= 2 ){
        for(int i = interval; i<n; i++){
            int temp = arr[i];
            int j;
            for(j = i;j >=interval && arr[j-interval]>temp; j-=interval ){
                arr[j]= arr[j-interval];
            }
            arr[j] = temp;
        }

    }
}
void display_arr(int arr[], int n){
    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
}