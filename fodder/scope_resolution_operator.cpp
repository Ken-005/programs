#include<iostream>
int m = 10;//global varioable
int main(){
    int m = 20;
    std::cout<<"The global variable :"<<::m<<std::endl;
    {
        int k = 10;
        int m = 30;
        std::cout<<"We are in the inner block"<<std::endl;
        std::cout<<"K is = "<<k<<std::endl;
        std::cout<<"m is = "<<m<<std::endl;
        std::cout<<"::m is ="<<::m<<std::endl;
    }
 std::cout<<"We are in the outer block"<<std::endl;
 //std::cout<<"K is ="<<k<<std::endl;
 std::cout<<"m is = "<<m<<std::endl;
 std::cout<<"::m is ="<<::m<<std::endl;
 
    return 0;
}