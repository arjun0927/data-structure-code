#include<iostream>
#include<limits.h>
using namespace std;
void findmin(int arr[],int &mini,int n ,int i){
	if(i>=n) return;
	if(arr[i]<mini){
		mini=min(arr[i],mini);
	}
	findmin(arr,mini,n,i+1);
}

void findmax(int arr[],int& maxi,int n , int i){
	if(i>=n){
		return ;
	}
	if(arr[i]>maxi){
		maxi=max(maxi,arr[i]);
		
	}
	findmax(arr,maxi,n,i+1);

	

}

int main()
{
   int arr[]={7,3,8,0,34,98};
   int maxi=INT_MIN;
   int mini=INT_MAX;
   int n=6,i=0;
  
   findmax(arr,maxi,n,i);
   findmin(arr,mini,n,i);

	
	cout<<"maximum number : "<<maxi<<endl;
	cout<<"minimum number : "<<mini<<endl;
return 0;


}