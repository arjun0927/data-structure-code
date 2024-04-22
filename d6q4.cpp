#include<iostream>
using namespace std;

bool primenum(int n){
	if(n==1 || n==0)return false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			
			return false;
		}
	}
		return true;
}


int main()
{
	int n=9;
	bool result = primenum(n);
	if(result==0){
		cout<<"not a prime no";
	}
	else {
		cout<<" prime no";
	}


return 0;


}