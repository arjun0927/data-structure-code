#include<iostream>
using namespace std;

bool findkey(string str , int n , int i , char key){
   if(i>=n) return false;
   if(str[i]==key){
	return true;
   }
   return findkey(str,n,i+1,key);
}
int main()
{
	string str="arjun singh";
	int n = str.length();
	int i=0;
	char key = 'i';
	bool ans =findkey(str,n,i,key); 
	cout<<"answer is "<<ans<<endl;



return 0;


}