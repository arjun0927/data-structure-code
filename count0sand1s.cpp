#include<iostream>
using namespace std;

void find(int arr[],int size){
	int numzero=0;
	int numones=0;
	for(int i=0;i<size;i++){
		if(arr[i]==0){
			numzero++;
		}
		
		if(arr[i]==1){

			numones++;
		}
		
	}
	cout<< numzero<<"-0s"<<endl;
	cout<<numones<<"-1s";
}

int main()
{
  int arr[]={0,0,1,1,1,1,1,1,1};
  int size=9;
   find(arr,size);


return 0;


}