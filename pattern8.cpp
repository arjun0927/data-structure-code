#include<iostream>
using namespace std;

int main()
{
    int n=6 ;
// 	for( int i=0 ; i<n ; i++){
// 		for (int j=0 ; j<i ;j++){
// 			cout<<" ";
// 		}
// 		for(int j=0 ;j<n-i;j++){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}


// return 0;
  for (int i=0 ; i<n ; i++){
         int count=i+1;
         for ( int j=0 ; j<i+1 ; j++){
             cout<<j+1<<" ";
         }
         for(int j=0;j<2*n-2*i-2;j++){
             cout<<" ";
         }
         for(int j=0;j<i+1;j++){
             cout<<count<<" ";
             count=count-1;
         }
        
         cout<<endl;
     }


}