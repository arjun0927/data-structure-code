#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printSubsequences(string &str , int i , string output){
	if(i>=str.length()){
		cout<<output<<" ";
		return ;
	}
	// Exclude 
	printSubsequences(str,i+1,output);
	// Include 
	output+=str[i];
	printSubsequences(str,i+1,output);

}
int main()
{

string str = "ab";
string output = "";
int i=0 ;
printSubsequences(str,i,output);

return 0;


}