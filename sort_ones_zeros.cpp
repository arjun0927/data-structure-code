#include <iostream>
#include <vector>
using namespace std;

void find0sand1s(vector<int> arr)
{
	// int zeros = 0, ones = 0;
	// for (int i = 0; i < arr.size(); i++)
	// {
	// 	if (arr[i] == 0)
	// 		zeros++;
	// 	if (arr[i] == 1)
	// 		ones++;
	// }
	// for (int i = 0; i < zeros; i++)
	// {
	// 	arr[i] = 0;
	// }
	// for (int i = zeros + 1; i < arr.size(); i++)
	// {
	// 	arr[i] = 1;
	// }
	// for (int i = 0; i < arr.size(); i++)
	// { 
	// 	cout << arr[i] << ",";
	// }
	int i = 0;
	int start = 0;
	int end = arr.size()-1;
	while(start<end){
		if(arr[i]==0){
			swap(arr[i],arr[start]);
			i++;
			start++;
		}
		else{
			swap(arr[i],arr[end]);
			end--;

		}
	}
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<",";	}
}

int main()
{
	vector<int> arr{1, 1, 0, 1, 0, 1, 0, 0, 1};
	find0sand1s(arr);

	return 0;
}