#include<iostream>
#include<vector>
using namespace std;

void findtriplet(vector <int> arr, int sum){
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			for(int k=j+1;k<arr.size();k++){
				if(arr[i]+arr[j]+arr[k]==sum){
					cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"\n";
				}
			}
		}
	}
}

int main()
{
    vector<int> arr{2,7,9,5,7,8,3,2};
	int sum = 20;
    findtriplet(arr,sum);


return 0;


}