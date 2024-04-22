#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i = 0;i<size;i++){
		if(key==arr[i]){
			return 1;
		}
		
	}
	return 0;
}

int main()
{
    int arr[]={1,7,10,8,6,8,6};
	int size =7;
	int key = 12;
	// cin>>key;
	bool find =search(arr,size,key);
	if(find){
		cout<<"found key";
	}
	else{
		cout<< "not found key";
	}

	



return 0;


}