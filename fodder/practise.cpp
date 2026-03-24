#include<iostream>
using namespace std;
int main(){
    int vec[5] = {67 , 534,342,65,33};
    for(int i = 0 ; i<5;i++){
        for (int j = 0 ;j<5-i-1;j++){
            if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
cout<<"sorted array"<<endl;
for(int i = 0; i<5;i++){
    cout<<vec[i]<<" ";
}


    return 0;
}