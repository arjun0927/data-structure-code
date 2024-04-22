#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"enter the value :"<<endl;
	cin>>n;
	vector<int> arr(n);
	// cout<<arr.size()<<endl;
	// cout<<arr.capacity()<<endl;
	for(int i=0 ; i<arr.size();i++){
		cin>>arr[i];
		cout<<arr[i]<<endl;
		
	}
	arr.push_back(8);
	cout<<endl;
	for(int i=0 ; i<arr.size();i++){
		cout<<arr[i]<<",";
		
	}
	cout<<endl;
	cout<<arr.empty();
return 0;


}