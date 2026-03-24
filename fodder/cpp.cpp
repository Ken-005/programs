//using normal methods to find factorial, fib, 

#include<iostream>
int main(){
    int num;
    int fact = 1 , fib;
    std::cout<<"Enter the number. ";
    std::cin>>num;
    for( int i = 1 ; i<= num ; i++) {
        fact = fact * i;
     
    }

    std::cout<<"The fact is "<<fact<<std::endl;
    int a = 0;
    int b = 1;
    int c;
    std::cout<<"fib series is ";
    std::cout<<a<<" "<<b<<" ";
    for (int i = 2 ; i <=num; i++){
        c= a+b;
        std::cout<<c<<" ";
        a= b;
        b=c;
    }
    
 
    return 0;
}