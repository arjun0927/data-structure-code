#include<iostream>
using namespace std;

int main()
{
	int n=6;
	for(int i=0 ; i<n;i++){
		for(int j=0;j<2*n-1;j++){
			if(j>=n-i-1 && j<=n+i-1){
				if(j==n-i-1 || j==n+i-1 || i==n-1){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}

return 0;


}