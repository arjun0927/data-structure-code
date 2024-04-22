#include <iostream>
#include<climits>
using namespace std;


int main()
{
	int arr []={8,9,0,10000,123,-24,38976};
	int size=7;
	int max = INT_MIN;
	for(int i=0;i<size ; i++){
	    if(arr[i]>max){
	        max=arr[i];
	    }
	   
	}
	cout<<max<<"\n";

	int min = INT_MAX;
	for(int i=0;i<size ; i++){
	    if(arr[i]<min){
	        min=arr[i];
	    }
	   
	}
	cout<<min;
	


return 0;


}
