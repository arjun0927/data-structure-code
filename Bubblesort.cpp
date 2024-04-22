#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr{2,5,2,3,6,3,5,10,56,23};
	int n= arr.size();
	
	for(int i=0;i<n-1;i++){
		int swapcount = 0;
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[i],arr[j]);
				swapcount++;
			}
		}
		if(swapcount==0) break;
	}
	for(int i=0 ;i<n; i++){
		cout<<arr[i]<<" ";
	}


return 0;


}