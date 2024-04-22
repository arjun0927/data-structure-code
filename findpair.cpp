#include<iostream>
#include<vector>
using namespace std;
void find_pairsum(vector<int>arr,int sum){
	for(int i =0 ; i<arr.size(); i++){
		for(int j = i+1; j<arr.size(); j++){
			if(arr[i]+arr[j]==sum){
				cout<<arr[i]<<","<<arr[j]<<endl;
				
			}
		}
	}
}



int main()
{


vector<int> arr{1,4,5,6,7,8,3};
int sum = 9;

  find_pairsum(arr,sum);

return 0;


}