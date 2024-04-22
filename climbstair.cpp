#include<iostream>
using namespace std;

int climbstair(int n){
   if(n==0||n==1) return 1;
   int ans = climbstair(n-1)+climbstair(n-2);
   return ans;


}


int main()
{
   int n=2 ;
   int ans = climbstair(n);
   cout<<"itne tarike hai : "<<ans;
   
 
 


return 0;


}