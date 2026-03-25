#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter ";
    cin>>num;
    for (int i = 0; i<num; i++){
          
        for(int j = 0; j<=i;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    for (int i =0 ; i<num+1;i++){
        for(int j = 0; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}