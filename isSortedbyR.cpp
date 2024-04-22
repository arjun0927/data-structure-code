#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &v,int & n,int i){
	if(i==n-1){
		return true ;
	}
	if(v[i+1]<v[i]){
		return false;
	}

	

	isSorted(v,n,i+1);
}

int main()
{
   vector<int> v{1,2,3,4,8,6};
   int n = v.size();
   int i=0;

   cout<< "sorted  "<<isSorted(v,n,i);



return 0;


}