#include<iostream>
using namespace std;

int main()
{

 int arr[]={10,20,30,40,50,60,70,80,90};
//  cout<<"enter the array element :"<<endl;
 int size=9;
//  for(int i=0;i<size ; i++){
// 	cin>>arr[i];
//  }
 int start=0;
 int end=size-1;
 while(start<=end){
	if(start==end ){
		cout<<arr[start];
	}
	else{
	cout<<arr[start]<<",";
	cout<<arr[end]<<",";
	}
	
	
	start++;
	end--;
	
 }
//  for(int i=0;i<size;i++){
// 	cout<<arr[i]<<" ";
//  }



return 0;
}