#include<iostream>
using namespace std;

int main()
{
  int arr[]= {1,2,3,4,5,6,7,8};
  int size=8;
  int start=0 , end= size-1;
  while (start<=end)
  {
	// swap(arr[start],arr[end]);
	cout<<arr[start]<<",";
	cout<<arr[end]<<",";
	start++;
	end--;
  }
//   for(int i=0;i<size;i++){
// 	cout<<arr[i]<<",";
//   }
  
 
  


return 0;


}