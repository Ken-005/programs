#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter ";
    cin>>num;
    for(int i = 0; i<num; i++){
        for(int j = 0; j<=num-i;j++){
            cout<<" ";
        }
        for (int z = 0 ; z < 2 * i +1 ; z++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = num-1 ; i>=0; i--){
        for (int j = 0  ;j<= num - i ; j++ ){
            cout<<" ";
        }
        for (int z=2*i+1; z>0;z-- ){
            cout<<"*";

        }
        cout<<endl;
    }



    return 0;
}
