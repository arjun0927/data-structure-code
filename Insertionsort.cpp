#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>arr{1,2,43,2,4,7,1};
	int n=arr.size();
	for(int i=1;i<n;i++){
		int store = arr[i];
		int j=i-1;
		for( ; j>=0 ;j--){
			if(arr[j]>store){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=store;
	}
	for(int i=0 ; i<n;i++){
		cout<<arr[i]<<" ";
	}

return 0;


}