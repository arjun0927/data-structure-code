#include<iostream>
using namespace std;
  
int findpeak(int arr[7],int n){
int s=0;
int e=n-1;
int mid = s + (e-s)/2;
while(s<e){
while(s<e){
if(arr[mid]<arr[mid+1]){
	s=mid+1;
  }
  else{
	e=mid;
  }
	mid=s+(e-s)/2;
} 
} 
return s;
}  
int main()
{
   int arr[] ={1,2,3,1};
   int n=4;
   int ans = findpeak(arr,n);
   cout<<" peak element[index] "<<ans ;



return 0;


}