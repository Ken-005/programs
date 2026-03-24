#include<iostream>
using namespace std;
int main (){
 for (int i = 4 ;i>= 0 ; i--){
    for (int j = 0 ; j<= 5 - i; j++ ){
        cout<<" ";
    
    }
    for (int z = 2* i +1 ; z > 0;z --){
        cout<<"*";
    }
    cout<<endl;
 }

    return 0;
}
/*
*********
 *******
  *****
   ***
    *
    **/