#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr ){
	int n = arr.size();
	int s = 0;
	int e = n-1;
	int m= s+(e-s)/2;
	while(s<=m){
		if(arr[m+1]<n &&arr[m]>arr[m+1]){
			return arr[m];
		}
		else if(arr[m-1]>=0 && arr[m]<arr[m-1]){
			return arr[m-1];
		}
		else if(arr[s]<arr[m]){
			s=m+1;
		}
		else if(arr[s]>arr[m]){
			e=m-1;
		}
		m =s+(e-s)/2;
	}
}

int main()
{
	vector<int> arr{1,2,3,4,5,6,7,9,1,2,3};
	int pivot = findPivot(arr);
	cout<<pivot;

return 0;


}