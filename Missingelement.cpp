#include<iostream>
using namespace std;

void Missingelement(int a[],int s){
	for(int i=0 ; i<s; i++){
		int index = abs(a[i]);
		if(a[index-1]>0){
			a[index-1] *=-1;
		}
	}
	for(int i=0 ; i<s ; i++){
		if(a[i]>0){
			cout<<i+1<<" ";
		}
	}
}

int main()
{

int a[]={4,2,4,4,4};
int size = sizeof(a)/sizeof(int);

Missingelement(a,size);


return 0;


}