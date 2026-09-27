#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the digits";
   int count =0;
   cin>>n;
   if(n==0) count++;
   if(n<0) 
   n = -(n);
   while(n!=0){
    n= n/10;
    count++;
   }
   cout<<count;
    
}