#include<iostream>
#include<vector>
using namespace std;

vector<int> findintersection(vector<int> arr,vector<int> brr,vector<int> crr){
	for(int i=0;i<arr.size();i++){
		// int element=arr[i];
		for(int j=0;j<brr.size();j++){
			if(arr[i]==brr[j]){
				crr.push_back(arr[i]);
			}
		}
	}
	return crr;
}


int main()
{
	vector<int> arr{9,4,5,2,7,8};
	vector<int> brr{9,4,0,1,8,2,7};
	vector<int> crr{};
	vector<int> result = findintersection(arr,brr,crr);
	for(auto values: result){
		cout<<values<<" ";
	}

return 0;


}