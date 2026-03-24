//if it is reverse 
#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter the number ";
  cin>>num;
  int rev = 0;
  int dig;
 int original = num;
  do{
  dig = num%10;
  rev = rev*10 + dig;
  num = num/10;
}
  while (num !=0);
  if (original == rev){
    cout<<"the reverse of the "<<original<<" is "<<rev;
    cout<<" The number is pallandrom"<<endl;
  }else{
    cout<<rev;
    cout<<"The number is not "<<endl;

  }

    return 0;
}