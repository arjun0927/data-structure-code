#include<iostream>
#include<string.h>
using namespace std;
bool checkpallindrome(char name[], int n){
	int i =0;
	int j= n-1;
	while(i<=j){
		if(name[i]==name[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
		
	}
	return true;
	
}

int main()
{
char name[50]={'a','r','r','r','k'};
int n = strlen(name);


if(checkpallindrome(name,n)){
	cout<<"pallindrome";
}
else{
	cout<<"not a pallindrome";
}



return 0;


}