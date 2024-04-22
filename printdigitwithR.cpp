#include<iostream>
using namespace std;

void printdigits(int a){
	if(a==0) return;
	
	printdigits(a/10);
	int b = a%10;
	cout<<b<<endl;

}

int main()
{
   int a=3000;
   if(a==0) 
   cout<<a;
   printdigits(a);



return 0;


}