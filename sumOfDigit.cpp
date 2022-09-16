
// objective:  calculate sum of digits of number:
#include<bits/stdc++.h>
using namespace std;
int main(){
int number, rem=0, sum=0;
  std::cout<<"Enter number: "<<std::endl;
  std::cin>>number;
  while(number>0){
    rem=number%10;
    sum=sum+rem;
    number=number/10;
  }
   std::cout<<"Sum of digits of number: "<<sum<<std::endl;
  
}

i/p: 124
o/p: 7
