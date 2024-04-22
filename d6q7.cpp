#include<iostream>
using namespace std;

int main()
{
	int arr[]={9,1,7,9};
	int ans=0;
	for(int i=0;i<4;i++){
		ans=ans*10+arr[i];
	}
	cout<<ans;



return 0;


}