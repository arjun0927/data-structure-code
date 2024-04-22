#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector<int> arr={1,2,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5};
int n= arr.size();
int target=4;
int s = 0;
int e= n-1;
int m = s+(e-s)/2;
int ans=-1;

while(s<=e){
	if(target==arr[m]){
		ans=m;
		// for first occurence
		e=m-1;
		// for last occurence 
		// s=m+1;
	}
	else if(target<arr[m]){
		e=m-1;
	}
	else{
		s=m+1;
	}
	m= s+(e-s)/2;
}
cout<<ans;

return 0;


}