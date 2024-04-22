#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarysearch(int arr[],int n , int key ){
	int start= 0;
	int end = n-1;
	int mid = start +(end-start)/2;
	

	while(start<=end){
		if(key==arr[mid]){
			return mid;
		}
		else if(key>arr[mid]){
			
			start=mid+1;
		}
		else{
			
			end=mid-1;
		}
		mid= start + (end-start)/2;
	} 
	return -1;
}
int main()

{
	int arr[]= {4,5,7,9,12,34,56};
	int n = 7;
	int key = 9;
	int result = binarysearch(arr,n,key);
	if(result>=0){
		cout<<"found at "<<result;
	}
	else{
		cout<<"not found";
	}

	// vector<int> arr={1,2,4,5,6,9};
	// if(binary_search(arr.begin(),arr.end(),7)){
	// 	cout<<"found";
	// }
	// else{
	// 	cout<<"not found";
	


return 0;


}