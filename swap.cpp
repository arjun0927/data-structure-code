#include<iostream>
using namespace std;

void swapnum(int a, int b){
	int temp ;
	temp=a;
	a=b;
	b=temp;
	
	}


int main()
{
	int a=4,b=5;
	// cin>>a>>b;
	swapnum(a,b);
	cout<<a<<" "<<b;



return 0;


}