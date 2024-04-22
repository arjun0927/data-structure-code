#include<iostream>
using namespace std;



int factorial(int n){

	// int i= 1;
	int result =1;
	for ( int i=n;i>=1 ; i--){
		result  = result*i	;  
			
			 
	}
	return result;
}


int main()
{
	int n=5;
	int fact = factorial(n);
	cout<<"Factorial :"<<fact;
	
	
return 0;


}