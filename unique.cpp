#include<iostream>
#include<vector>
using namespace std;

int findunique( vector <int> arr){
	int ans = 0;
	for(int i=0 ; i<arr.size();i++){ 
		ans=ans^arr[i];
	}
	return ans;
}


int main()
{
	vector<int> arr{1,3,1,3,4,6,6,4,7};
	int result = findunique(arr);
	cout<<result;



return 0;


}