#include<iostream>
using namespace std;

void swap(int *l,int*m){
	int temp=*l;
	*l=*m;
	*m=temp;

}

int main()
{
	// int a=49;
	// int *aptr=&a;
	// cout<<a<<endl;
	// cout<<&a<<endl;
	// cout<<aptr<<endl;
	// cout<<*aptr<<endl;

	// *aptr=20;
	// cout<<a<<endl;
	// cout<<aptr<<endl;
	// cout<<*aptr<<endl;

	// *aptr=*aptr +1;
	// *aptr=*aptr -1;
	// cout<<aptr<<endl;
	// cout<<*aptr<<endl;

	int arr[]={5,7,9};
	int *p=arr;
	// cout<<*(p+1)<<endl;

	for(int i=0 ; i<3;i++){
		cout<<i[arr]<<endl;
		cout<<*(p+i)<<" ";
	
	}

	int b=9;
	int c=8;
	int *bptr=&b;
	int *cptr=&c;

	swap(&b,&c);
	// or
	// swap(*bptr,*cptr)

	// cout<<b<<" "<<c<<endl;




return 0;


}