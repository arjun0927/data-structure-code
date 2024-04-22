#include <iostream>
#include <vector>
using namespace std ;
void printSubarray_util(vector<int> &arr , int start , int end){
    // base case 
    if(end >= arr.size()){
        return ;
    }
    for(int i=start ; i<=end ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printSubarray_util(arr,start,end+1);
}
void printSubarray(vector<int> &arr){
	int end = 0 ;
        for(int i=0 ; i<arr.size() ; i++){
            end = i ;
            printSubarray_util(arr,i,end);
        }
    }

int main()
{
    vector<int> arr = {1,2,3,4,5};
    printSubarray(arr);

    return 0;
}
