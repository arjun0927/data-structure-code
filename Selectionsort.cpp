#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr{2,4,3,7,4,10,9};
	
	for(int i=0 ; i<arr.size()-1 ;i++){
		int min = i;
		for(int j=i+1 ; j<arr.size();j++){
			if(arr[min]>arr[j]){
				min = j;
			}
		}
		swap(arr[i],arr[min]);
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}


return 0;


}