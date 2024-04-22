#include<iostream>
using namespace std;

void findrowsum(int arr[][3]) {
    int row = 3,col=3;
	for(int i=0;i<row;i++){
		int ans=0;
		for(int j=0 ; j<col;j++){
			ans=ans+arr[i][j];
		}
		cout<<"row"<<i+1<<" sum : "<<ans<<"\n";
	}
}

int main()
{
      int arr[3][3]={{1,2,3},{2,4,6},{8,0,3}};
	  findrowsum(arr);

return 0;


}